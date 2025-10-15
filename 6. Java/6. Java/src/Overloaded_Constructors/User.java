package Overloaded_Constructors;

public class User {

    String username;
    String email;
    int age;

    //No arguments, only default values
    User(){
        this.username = "Guess";
        this.email = "Not provided";
        this.age = 0;
    }

    //With arguments and values
    User(String username){
        this.username = username;
        this.email = "Not provided";
        this.age = 0;
    }

    User(String username, String email){
        this.username = username;
        this.email = email;
        this.age = 0;
    }

    User(String username, String email, int age){
        this.username = username;
        this.email = email;
        this.age = 28;
    }

}
