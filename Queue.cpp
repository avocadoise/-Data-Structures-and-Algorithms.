#include <iostream>
#include <queue>
#include <string>

using namespace std;

    class Person{
    public:
        string name;

        int ticket_number;

        Person(string pname, int tnum) {
        name = pname;
        ticket_number = tnum;
        }
    };

    class Queue{
    private:
        queue<Person> line;
        int next_ticket =1;
    public:
        void EnQueue(string name){
        Person newperson(name, next_ticket++);
        line.push(newperson);

        cout << newperson.name << "  Added to the queue. " << "(Ticket Number: " << newperson.ticket_number << ")";
        };

        bool isEmpty(){
            return line.empty();
            }

        void Peek(){
            Person front = line.front();
            cout << "Next in line: " << front.name << "(Ticket Number: " << front.ticket_number << " )";  
            }

        int Size(){
            return line.size();
            }

        int Position(string nameticket) {
            int pos = 1;
            queue<Person> fqueue = line;

            while (!fqueue.empty()) {
            Person first_person = fqueue.front();
            if (first_person.name == nameticket || to_string(first_person.ticket_number) == nameticket) {
                return pos;
                }
                fqueue.pop();
                pos++;
            }

            return -1;
        }

    };

    

    int main(){

        Queue queue;
        int choice;
        string nameticket;
        bool code = true;

        while(code){
            
            cout << endl;
            cout << "Welcome to Olivia Rodrigo's Ticketing System!" << endl;
            cout << endl;
            cout << "1. Enqueue a person" << endl;
            cout << "2. Check your position in the queue" << endl;
            cout << "3. Exit" << endl;
            cout << "Choose an option: ";
            cin >> choice;

            if(choice == 1){
                string name;
                cout << "Enter the name: ";
                cin >> name;
                queue.EnQueue(name);
                cout << " Queue size: " << queue.Size() << endl;
            }
            else if (choice == 2 ){
                cout << "Enter name or ticket number: " << endl;
                cin >> nameticket;
                int pos = queue.Position(nameticket);
                if(pos!= -1 ){
                    cout << nameticket << " is currently at position " << pos << " in the queue." << endl;
                }
            }

            else if  (choice == 3) {
                cout << "Thank you" << endl;
                break;
                
            }
            
        }



        return 0;
    }