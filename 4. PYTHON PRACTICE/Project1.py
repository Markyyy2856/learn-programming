#Simple Ordering System with login/signup

# Main Banner
print("""
+================================+
|     Welcome to Mcjobbilee      |
|           (っ ᐛ )っ            |
| 1. Login                       |
| 2. Signup                      |
+================================+
""")
choice = int(input("What would you like to do? (Choose 1 or 2): "))

if choice == 2:
    print("""
+================================+
|            SIGNUP              |
+================================+
""")
    username = input("Create username: ")
    password = input("Create Password: ")
elif choice == 1:
    print("""
+================================+
|           LOGIN PAGE           |
+================================+
""")
    username = input("Enter username: ")
    password = input("Enter Password: ")
else:
    print("Invalid selection. Please restart and choose 1 or 2.")
    exit(0)

# Burger Prices
pmb = 50  # Plain Mcjo Burger
cmb = 65  # Cheese Mcjo Burger
amb = 80  # Aloha Mcjo Burger

# Softdrinks Prices
coke = 35
sprite = 35
royal = 35

# Fries Prices
reg_fries = 40
med_fries = 55
lar_fries = 70

# Sundae Prices
choco_sundae = 30
straw_sundae = 30

def show_menu():
    global add_cart
    while True:
        print("""
+================================+
|            MENU                |
+================================+
""")
        print("1. Burger")
        print("2. Drinks")
        print("3. Fries")
        print("4. Sundae")
        print("0. Back to Home")
        menu = int(input("What would you like to order? (Choose from 1-4, or 0 to go back): "))

        #Burger Selection
        if menu == 1:
            while True:
                print("""
+================================+
|        Mcjo Burger List        |
+================================+
""")
                print(f"1. Plain Mcjo Burger - ₱{pmb}")
                print(f"2. Cheese Mcjo Burger - ₱{cmb}")
                print(f"3. Aloha Mcjo Burger - ₱{amb}")
                print("0. Back to Menu")
                burger = int(input("Select your Mcjo Burger (Choose from 1-3, or 0 to go back): "))

                if burger == 1:
                    amount = int(input("Amount: "))
                    total = pmb * amount
                    add_cart.append(f"{amount} x Plain Mcjo Burger - ₱{total}")
                    print(f"Added {amount} x Plain Mcjo Burger (₱{pmb} each) to cart. Total: ₱{total}")
                elif burger == 2:
                    amount = int(input("Amount: "))
                    total = cmb * amount
                    add_cart.append(f"{amount} x Cheese Mcjo Burger - ₱{total}")
                    print(f"Added {amount} x Cheese Mcjo Burger (₱{cmb} each) to cart. Total: ₱{total}")
                elif burger == 3:
                    amount = int(input("Amount: "))
                    total = amb * amount
                    add_cart.append(f"{amount} x Aloha Mcjo Burger - ₱{total}")
                    print(f"Added {amount} x Aloha Mcjo Burger (₱{amb} each) to cart. Total: ₱{total}")
                elif burger == 0:
                    break
                else:
                    print("Invalid selection. Please try again.")

        # Softdrinks Selection
        elif menu == 2:
            while True:
                print("""
+================================+
|         Softdrinks List        |
+================================+
""")
                print(f"1. Coke - ₱{coke}")
                print(f"2. Sprite - ₱{sprite}")
                print(f"3. Royal - ₱{royal}")
                print("0. Back to Menu")
                drink = int(input("Select your drink (Choose from 1-3, or 0 to go back): "))

                if drink == 1:
                    amount = int(input("Amount: "))
                    total = coke * amount
                    add_cart.append(f"{amount} x Coke - ₱{total}")
                    print(f"Added {amount} x Coke (₱{coke} each) to cart. Total: ₱{total}")
                elif drink == 2:
                    amount = int(input("Amount: "))
                    total = sprite * amount
                    add_cart.append(f"{amount} x Sprite - ₱{total}")
                    print(f"Added {amount} x Sprite (₱{sprite} each) to cart. Total: ₱{total}")
                elif drink == 3:
                    amount = int(input("Amount: "))
                    total = royal * amount
                    add_cart.append(f"{amount} x Royal - ₱{total}")
                    print(f"Added {amount} x Royal (₱{royal} each) to cart. Total: ₱{total}")
                elif drink == 0:
                    break
                else:
                    print("Invalid selection. Please try again.")

        # Fries Selection
        elif menu == 3:
            while True:
                print("""
+================================+
|           Fries List           |
+================================+
""")
                print(f"1. Regular Fries - ₱{reg_fries}")
                print(f"2. Medium Fries - ₱{med_fries}")
                print(f"3. Large Fries - ₱{lar_fries}")
                print("0. Back to Menu")
                fries = int(input("Select your fries (Choose from 1-3, or 0 to go back): "))

                if fries == 1:
                    amount = int(input("Amount: "))
                    total = reg_fries * amount
                    add_cart.append(f"{amount} x Regular Fries - ₱{total}")
                    print(f"Added {amount} x Regular Fries (₱{reg_fries} each) to cart. Total: ₱{total}")
                elif fries == 2:
                    amount = int(input("Amount: "))
                    total = med_fries * amount
                    add_cart.append(f"{amount} x Medium Fries - ₱{total}")
                    print(f"Added {amount} x Medium Fries (₱{med_fries} each) to cart. Total: ₱{total}")
                elif fries == 3:
                    amount = int(input("Amount: "))
                    total = lar_fries * amount
                    add_cart.append(f"{amount} x Large Fries - ₱{total}")
                    print(f"Added {amount} x Large Fries (₱{lar_fries} each) to cart. Total: ₱{total}")
                elif fries == 0:
                    break
                else:
                    print("Invalid selection. Please try again.")

        # Sundae Selection
        elif menu == 4:
            while True:
                print("""
+================================+
|          Sundae List           |
+================================+
""")
                print(f"1. Chocolate Sundae - ₱{choco_sundae}")
                print(f"2. Strawberry Sundae - ₱{straw_sundae}")
                print("0. Back to Menu")
                sundae = int(input("Select your sundae (Choose from 1-2, or 0 to go back): "))

                if sundae == 1:
                    amount = int(input("Amount: "))
                    total = choco_sundae * amount
                    add_cart.append(f"{amount} x Chocolate Sundae - ₱{total}")
                    print(f"Added {amount} x Chocolate Sundae (₱{choco_sundae} each) to cart. Total: ₱{total}")
                elif sundae == 2:
                    amount = int(input("Amount: "))
                    total = straw_sundae * amount
                    add_cart.append(f"{amount} x Strawberry Sundae - ₱{total}")
                    print(f"Added {amount} x Strawberry Sundae (₱{straw_sundae} each) to cart. Total: ₱{total}")
                elif sundae == 0:
                    break
                else:
                    print("Invalid selection. Please try again.")

        elif menu == 0:
            break
        else:
            print("Invalid selection. Please try again.")

while True:  # Login loop
    counter = 0
    add_cart = []  # Clear cart on new login
    logout = False
    print("""
+================================+
|         LOGIN PAGE             |
+================================+
""")
    while counter < 3:
        print("Login to continue: ")
        login_username = input("Email/username: ")
        login_password = input("Password: ")
        
        if login_username == username and login_password == password:
            print("""
+================================+
|      Login successful!         |
+================================+
""")
            print(f"Welcome, {login_username}!")

            while True:
                print("""
+================================+
|             HOME               |
+================================+
""")
                print("1. Order")
                print("2. View Cart")
                print("3. Check Out")
                print("0. Exit")
                action = int(input("What would you like to do? (Choose from 1-3): "))

                if action == 1:
                    show_menu()

                elif action == 2:
                    while True:
                        print("""
+================================+
|            My Cart             |
+================================+
""")
                        if add_cart:
                            for idx, item in enumerate(add_cart, 1):
                                print(f"{idx}. {item}")
                        else:
                            print("Your cart is empty.")

                        print("What would you like to do?")
                        print("1. Add Order")
                        print("2. Delete Order")
                        print("3. Check Out")
                        print("0. Back to Home")
                        cart_action = int(input("Choose an option (1-3, or 0 to go back): "))

                        if cart_action == 1:
                            show_menu()
                        elif cart_action == 2:
                            if add_cart:
                                del_idx = int(input("Enter the item number to delete (or 0 to cancel): "))
                                if del_idx == 0:
                                    continue
                                elif 1 <= del_idx <= len(add_cart):
                                    removed = add_cart.pop(del_idx - 1)
                                    print(f"Removed: {removed}")
                                else:
                                    print("Invalid item number.")
                            else:
                                print("Your cart is empty.")
                        elif cart_action == 3:
                            if add_cart:
                                print("""
+================================+
|          CHECK OUT             |
+================================+
""")
                                total_receipt = 0
                                print("Order Summary:")
                                for item in add_cart:
                                    print(item)
                                    price = int(item.split('₱')[1])
                                    total_receipt += price
                                print(f"\nTotal Receipt: ₱{total_receipt}")
                                print("Thank you for your order!")
                                add_cart.clear()
                                # Ask if user wants to order again
                                while True:
                                    again = input("Would you like to order again? (y/n): ").strip().lower()
                                    if again == 'y':
                                        break  # Go back to Home
                                    elif again == 'n':
                                        print("""
+================================+
|      Logging out...            |
+================================+
""")
                                        logout = True
                                        break
                                    else:
                                        print("Please enter 'y' or 'n'.")
                                if logout:
                                    break  # Break out of Home loop to login
                            else:
                                print("Your cart is empty. Nothing to check out.")
                            break
                        elif cart_action == 0:
                            break
                        else:
                            print("Invalid selection. Please try again.")

                elif action == 3:
                    print("""
+================================+
|          CHECK OUT             |
+================================+
""")
                    if add_cart:
                        total_receipt = 0
                        print("Order Summary:")
                        for item in add_cart:
                            print(item)
                            price = int(item.split('₱')[1])
                            total_receipt += price
                        print(f"\nTotal Receipt: ₱{total_receipt}")
                        print("Thank you for your order!")
                        add_cart.clear()
                        # Ask if user wants to order again
                        while True:
                            again = input("Would you like to order again? (y/n): ").strip().lower()
                            if again == 'y':
                                break  # Go back to Home
                            elif again == 'n':
                                print("""
+================================+
|      Logging out...            |
+================================+
""")
                                logout = True
                                break
                            else:
                                print("Please enter 'y' or 'n'.")
                        if logout:
                            break  # Break out of Home loop to login
                    else:
                        print("Your cart is empty. Nothing to check out.")

                elif action == 0:
                    print("""
+================================+
|         Exiting...             |
+================================+
""")
                    exit(0)
                if logout:
                    break  # Break out of Home loop to login
            if logout:
                break  # Break out of login attempts loop to login screen

        else:
            counter += 1 
            print("Incorrect username/password. \nYou have" , (3 - counter) , "attempt(s) left.")
            
            if counter == 3:
                print("You have exceeded your max attempt. Try again later.")
                break