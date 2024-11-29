#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct TODO{
    string subject;
    string due;
};

void create(vector<TODO> &task){
    TODO newtask;
    cout << "Task subject: " ;
    cin.ignore();
    getline(cin,newtask.subject);

    cout << "Enter due date: ";
    getline(cin,newtask.due);
    
    task.push_back(newtask);
    cout << "Tsk added. " << endl;
    cout << endl;
};

void update(vector<TODO> &task){
    int index;
    cout << "To-do list: " << endl;
    for(size_t i = 0; i < task.size(); i++){
        cout << i+1 << ". Subject: " << task[i].subject << ". Due date: " << task[i].due << endl;
    }
    cout << "Enter subject number to update: ";
    cin >> index;

    cout << "Enter new subject: ";
    cin.ignore();
    getline(cin, task[index - 1].subject); 
    cout << "Enter new due date: ";
    getline(cin, task[index - 1].due); 
    cout << "To do updated" << endl; 
    cout << endl;
};

void read(vector<TODO> task){
    cout << "To-do list: " << endl;
    for(size_t i = 0; i < task.size(); i++){
        cout << i+1 << ". Subject: " << task[i].subject << ". (Due date: " << task[i].due <<")"<< endl;
        cout << endl;
        cout << endl;
    }
};

void remove(vector<TODO> task){
    cout << "To-do list: " << endl;
    for(size_t i = 0; i < task.size(); i++){
        cout << i+1 << ". Subject: " << task[i].subject << ". (Due date: " << task[i].due <<")"<< endl;
    }
    
     int index;
    cout << "Enter task number to remove: ";
    cin >> index;
    if (index < 1 || index > task.size()) {
        cout << "Invalid task number!" << endl;
        return; 
    }
    task.erase(task.begin() + index - 1); 
    cout << "Task removed." << endl;
    cout << endl;
    cout << endl;
}

    int main(){

    vector<TODO> tasks; 
    int choice; 
    do {
       
        cout << " School work manager " << endl;
        cout << " -------------------------" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. view to do list " << endl;
        cout << "3. Update Task: " << endl;
        cout << "4. Remove completed task" << endl;
        cout << "5. Exit" << endl;
        cout << "===========================" << endl;
        cout << "Choose option: ";
        cin >> choice; 

        switch (choice) {
            case 1:
                create(tasks); 
                break;
            case 2:
                read(tasks); 
                break;
            case 3:
                update(tasks); 
                break;
            case 4:
                remove(tasks); 
                break;
            case 5:
                cout << "exit" << endl; 
                break;
            default:
                cout << "Invalid choice! Try again." << endl; 
        }
    } while (choice != 5); 
    return 0; 
}
    