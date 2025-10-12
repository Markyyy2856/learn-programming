
public class Overloaded_Methods {

    public static void main(String[] args) {

        //Overloaded methods - methods that share the same name,
        //                     but different parameters
        //                     signature = name + parameters

        //Example 1
        System.out.println(add(1, 2, 3));

        //Example 2
        String pizza = bakePizza("Thin Crust", "Mozzarella", "Pepperoni");
        System.out.println(pizza);

    }

    //Example 1
    static double add(double a, double b){
        return a + b;
    }
    static double add(double a, double b, double c){
        return a + b + c;
    }

    //Example 2
    static String bakePizza(String bread){
        return bread + " Pizza";
    }
    static String bakePizza(String bread, String cheese){
        return cheese + " " + bread + " Pizza";
    }
    static String bakePizza(String bread, String cheese, String topping){
        return topping + " " + cheese + " " + bread + " Pizza";
    }
}
