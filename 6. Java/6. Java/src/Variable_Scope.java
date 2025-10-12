

public class Variable_Scope {

    static int x = 3; //CLASS scope

    public static void main(String[] args) {

        //Variable scope - where a variable can be accessed

        //A variable declared inside a method is a LOCAL

        int x = 1; //LOCAL scope of Main

        System.out.println(x);
        doSomething();
    }

    static void doSomething(){
        int x = 2; //LOCAL scope of doSomething()

        System.out.println(x);
    }

}
