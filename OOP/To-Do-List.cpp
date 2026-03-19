#include<iostream>
#include <string>
#include <vector>
using namespace std;
class Task{
    private:
    string name;
    string description;
    string dueDate;
    bool completed;

    public:
    //Constructor to initialise a task
    Task(const string& name, const string& description, const string& dueDate)
    : name(name)
    , description(description)
    , dueDate(dueDate)
    , completed(false)
    {          
    }
    //Getter
    //Getter for task name
    string getName() const{ return name; }
    //Getter for task desciption
    string getDescription() const{ return description; }
    //Getter for task dueDate
    string getDueDate() const{ return dueDate; }
    //Getter for task completion status
    bool isCompleted() const{ return completed; }

    //Setter
    //Setter for task name
    void setName(const string& name) {this->name = name; }
    //Setter for task description
    void setDescription(const string& description){
        this->description = description;
    }
    //Setter for task dueDate
    void setdueDate(const string& dueDate){
        this->dueDate = dueDate;
    }
    //Mark the completed as true
    void markCompleted(){completed = true;}
    
    //Display the task details
    void displayTask() const{
        cout<<name<<" ("
        <<(completed ? "Completed" : "Pending")
        <<") - Due: "<< dueDate << endl
        <<"  Description: "<<description<<endl;
    }
};

//Define To-Do-List
class ToDoList{
    private:
    vector<Task> tasks; //List of Tasks
    public:
//Display the menu
    void displayMenu(){
        cout << "\n---------- To-Do List Menu -----------\n";
        cout << "1. Add Task\n";
        cout << "2. Delete Task\n";
        cout << "3. Display Tasks\n";
        cout << "4. Mark Task as Completed\n";
        cout << "5. Edit Task\n";
        cout << "6. Exit\n";
        cout << "-----------------------------------------\n";
    }

//Add a new Task
    void addTask(){
        string name, description, dueDate;
        cout<<"Enter task name: ";
        cin.ignore();
        getline(cin, name);

        cout<<"Enter task description: ";
        getline(cin, description);

        cout<<"Enter task due date  (YYYY-MM-DD)";
        getline(cin, dueDate);
        
        tasks.emplace_back(name, description, dueDate);
        cout<<"task added succesfully ";
    }
//Delete a task
    void deleteTask(){
        if(tasks.empty()){
            cout<< "No tasks to delete ";
            return;
        }
        cout<<"Tasks:"<< endl;
        for (int i = 0; i < tasks.size(); ++i){
            cout<< i + 1<<". "<<tasks[i].getName() <<endl;
        }
        cout<<"Enter the task number to delete";
        int taskNumber;
        cin >> taskNumber;

        if(taskNumber >= 1 && taskNumber <= tasks.size()){
            tasks.erase(tasks.begin() + taskNumber - 1);
            cout << "Task marked as completed!" << endl;
        }
        else {
            cout<<"Invalid task number"<<endl;
        }
        
    }

//Display all tasks
    void displayTasks(){
        if (tasks.empty()) {
            cout << "No tasks to display!" << endl;
            return;
        }
        cout << "Tasks:" << endl;
        for (int i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". ";
            tasks[i].displayTask();
        }
}

//Mark a task as completed
    void markTaskCompleted(){
        if (tasks.empty()) {
            cout << "No tasks to mark as completed!"
                 << endl;
            return;
        }
        cout << "Tasks:" << endl;
        for (int i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].getName()
                 << endl;
        }
        cout << "Enter the task number to mark as "
                "completed: ";
        int taskNumber;
        cin >> taskNumber;
        if (taskNumber >= 1 && taskNumber <= tasks.size()) {
            tasks[taskNumber - 1].markCompleted();
            cout << "Task marked as completed!" << endl;
        }
        else {
            cout << "Invalid task number!" << endl;
        }
    }
//Edit a task
    void editTask(){
        if(tasks.empty()){
            cout<<"No tasks to edit";
            return;
        }
        cout<<"Tasks:"<<endl;
        for(int i = 0; i < tasks.size(); ++i){
            cout<< i + 1 <<". "<<tasks[i].getName() <<endl;
        }
        int tasknumber;
        cin>>tasknumber;

        if(tasknumber >= 1 && tasknumber <= tasks.size()){
            Task& task = tasks[tasknumber - 1];
            string name , description, dueDate;
            cout<<"Enter new task name(current: "<< task.getName() << "): ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter new task description (current: "
                 << task.getDescription() << "): ";
            getline(cin, description);
            cout << "Enter new task due date (current: "
                 << task.getDueDate() << "): ";
            getline(cin, dueDate);

            task.setName(name);
            task.setDescription(description);
            task.setdueDate(dueDate);
            cout<<"Task updated successfullly!"<<endl;
        }
        else{
            cout<<"Invalid task number!"<<endl;
        }
    }

//Run the to-do list application
    void run(){
        int choice;
        do
        {
            displayMenu();
            cout<<"Enter your choice: ";
            cin>>choice;
            switch(choice){
                case 1:
                addTask();
                break;
                case 2:
                deleteTask();
                break;
                case 3:
                displayTasks();
                break;
                case4:
                markTaskCompleted();
                break;
                case 5:
                editTask();
                break;
                case 6:
                cout<<"Exiting program. Bye!"<<endl;
                break;
                default:
                cout<<"Invalid choice. Please try again!"<<endl;
            }

        } while (choice != 6);
        
    }
};

//main function
int main(){
//Create a To-Do List and run the application
ToDoList toDoList;
toDoList.run();
    return 0;
}