#include <iostream>
#include <vector>

using namespace std;

class Employee
{
   private:
      string name;

   public:
      Employee(string name);
      ~Employee();
      string getName() const;
      void setName(string name);
      virtual void display() const;
      virtual int getPayCheck() const = 0;
};

class HourlyEmployee : public Employee
{
   private:
      int hourlyWage;
      int hours;

   public:
      HourlyEmployee(string name, int hourlyWage, int hours);
      int getHourlyWage() const;
      void setHourlyWage(int hourlyWage);
      void display() const;
      int getPayCheck() const;
};

class SalaryEmployee : public Employee
{
   private: 
      int salary;
  
   public:
      SalaryEmployee(string name, int salary);
      int getSalary() const;
      void setSalary(int salary);
      void display() const;
      int getPayCheck() const;
};

Employee::Employee(string name)
{
   setName(name);
}

Employee::~Employee()
{
   cout << "Deleting Employee " << name << endl;
}

string Employee::getName() const
{
   return name;
}

void Employee::setName(string name)
{
   this->name = name;
}

void Employee::display() const
{
   cout << name << endl;
}

HourlyEmployee::HourlyEmployee(string name, int hourlyWage, int hours) : Employee(name)
{
   setHourlyWage(hourlyWage);
   this->hours = hours;
}

int HourlyEmployee::getHourlyWage() const
{
   return hourlyWage;
}

void HourlyEmployee::setHourlyWage(int hourlyWage)
{
   this->hourlyWage = hourlyWage;
}

void HourlyEmployee::display() const
{
   cout << getName() << " - $" << hourlyWage << "/hour" << endl;
   cout << "Pay check = $" << getPayCheck() << endl;
}

int HourlyEmployee::getPayCheck() const
{
   return hours * hourlyWage;
}

SalaryEmployee::SalaryEmployee(string name, int salary) : Employee(name)
{
   setSalary(salary);
}

int SalaryEmployee::getSalary() const
{
   return salary;
} 

void SalaryEmployee::setSalary(int salary)
{
   this->salary = salary;
}

void SalaryEmployee::display() const
{
   cout << getName() << " - $" << salary << "/year" << endl;
   cout << "Pay heck = $" << getPayCheck() << endl;
}

int SalaryEmployee::getPayCheck() const
{
   return salary / 24;
}

void displayEmployeeData(Employee *employee)
{
   employee->display();
}

int main()
{
   vector<Employee*> employees;
   char select = '\0';
   string name = "";
   int pay = 0;

   for (int i=0; i<3; i++)
   {
      cout << "Enter h)ourly or s)alary: ";
      cin >> select;
      cout << "Name: ";
      cin.ignore(1);
      getline(cin,name);
      if (select == 'h')
      {
         cout << "Hourly Rate: ";
         cin >> pay;
         employees.push_back(new HourlyEmployee(name, pay, 80));
      }
      else 
      {
         cout << "Salary: ";
         cin >> pay;
         employees.push_back(new HourlyEmployee(name, pay, 80));
      }
   }

   for (int i=0; i<employees.size(); i++)
   {
      displayEmployeeData(employees[i]);
   }

   for (int i=0; i<employees.size(); i++)
   {
      delete employees[i];
   }

   employees.clear();
 
   return 0;
} 
