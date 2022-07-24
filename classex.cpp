#include <iostream>
#include <string>

class Person
{
    protected:
        std::string name;

    public:
        Person()
        {
            //OK, I hate doing this.
            //But, it's necessary boilerplate for child classes
            //to work correctly.
            //
            //I don't like the constructor idea with the (:)
            //Yet, if I don't do that when the parent class
            //has no default constructor, 
            //the child class constructor complains.
            //
            //Problem solved by writing a parent class 
            //do nothing default constructor
        }

        explicit Person(const std::string& person_name)
        {
            name = person_name;
        }

        std::string getname(void) const
        {
            return name;
        }
};

class Student : public Person
{
    private:
        int _semester;
    
    public:
        Student( const std::string& student_name, int semester)
        : Person::Person{ student_name }
        {
            //using constructor from parent class
            //must be written like this to work
            //parent constructors only valid by 
            //calling with : operator as above
            //
            //Failure to do so means the constructor won't
            //take the name
            
            _semester = semester;
        }

        int getsemester(void)
        {
            return _semester;
        }
};


int main()
{
    Person person{ "John Doe"};
    std::cout << person.getname() << std::endl;

    Student student{ "Jane Doe", 2};
    std::cout << student.getname() << std::endl;
    std::cout << "Semester is: " << student.getsemester() << std::endl;

    return 0;

}