package Constructors;

public class Student {

    String name;
    int age;
    double gpa;
    boolean isEnrolled;

    Student(String name, int age, double gpa){
        //this - refers to the object we're currently working with
        this.name = name;
        this.age = age;
        this.gpa = gpa;
        this.isEnrolled = true;
    }

    void study(){
        System.out.println(this.name + " is studying");
    }
}
