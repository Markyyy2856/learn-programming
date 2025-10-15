package Overloaded_Constructors;

public class Overloaded_Constructors {

    static void main(String[] args) {

        //Overloaded constructors - Allow a class to have multiple constructors
        //                          with different parameter lists.
        //                          Enable objects to be initialized in various ways

        User user1 = new User("Spongebob");
        User user2 = new User("Patrick", "PStar@gmail.com");
        User user3 = new User("Sandy", "Sandy.ch33ks@gmail.com", 28);
        User user4 = new User();

        System.out.println(user1.username);
        System.out.println(user1.email);
        System.out.println(user1.age);

        System.out.println(user2.username);
        System.out.println(user2.email);
        System.out.println(user2.age);

        System.out.println(user3.username);
        System.out.println(user3.email);
        System.out.println(user3.age);

        //Object that has no arguments
        System.out.println(user4.username);
        System.out.println(user4.email);
        System.out.println(user4.age);

    }
}
