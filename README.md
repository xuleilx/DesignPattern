# DesignPattern

```mermaid
classDiagram
    class Person {
        +String name
        +int age
        +setName(String name)
        +getName() String
    }
    class Employee {
        +int employeeId
        +setEmployeeId(int id)
        +getEmployeeId() int
    }
    class Department {
        +String departmentName
        +setDepartmentName(String name)
    }

    Person <|-- Employee
    Employee --> Department
