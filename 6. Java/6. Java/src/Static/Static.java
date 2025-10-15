package Static;

public class Static {

    public static void main(String[] args) {

        //Static.Static - Makes a variable or method belong to the class
        //         rather than to any specific object
        //         Commonly used for utility methods or shared resources

        Friend friend1 = new Friend("Spongebob");
        Friend friend2 = new Friend("Patrick");
        Friend friend3 = new Friend("Sandy");

        /*
        System.out.println(friend1.numOfFriends);
        System.out.println(friend2.numOfFriends);
        System.out.println(friend3.numOfFriends);
        */

        System.out.println(Friend.numOfFriends);

        Friend.showFriends();

    }
}
