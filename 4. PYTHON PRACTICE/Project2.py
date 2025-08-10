#import time UPDATE TO PAG MAY LOGOUT NA


#Menu Selection
def showMenu():
    while True:
        print('''
+------------------------+
|    𓌉◯𓇋    MENU    𓌉◯𓇋  |
+------------------------+
        ''')
        print("1. Burgers")
        print("2. Softdrinks")
        print("3. Fries")
        print("4. Sundae")
        print("0. Back")
        menu = int(input("Select from the Menu(1-4): "))

        if menu == 1:
            print("\nBURGER LIST") #Shows Burger List
            print("1. Original MCJO Burger")
            print("2. Cheesy MCJO Burger")
            print("3. Aloha MCJO Burger")
            print("0. Back")
            burger = int(input("Select a burger(1-3): "))
            
            if burger == 1:
                amount = int(input("Amount: "))
                cart.append(f"{amount} x Original MCJO Burger")
                print("Successfully addedd")
            elif burger == 0:
                break
            else:
                print("Invalid selection. Select again.")

        elif menu == 2:
            print("\nSOFTDRINK LIST") #Shows Softdrink List
            print("1. Coke")
            print("2. Royal")
            print("3. Sprite")
            softdrinks = int(input("Select a softdrink(1-3): "))
            
            if softdrinks == 1:
                amount = int(input("Amount: "))
                cart.append(f"{amount} x Coke")
                print("Successfully addedd")
            elif softdrinks == 0:
                break
            else:
                print("Invalid selection. Select again.")

        elif menu == 3:
            print("\nFRIES LIST") #Shows Fries List
            print("1. Regular MCJO Fries")
            print("2. Medium MCJO Fries")
            print("3. Large MCJO Fries")
            fries = int(input("Select a fries(1-3): "))

            if fries == 1:
                amount = int(input("Amount: "))
                cart.append(f"{amount} x Regular MCJO Fries")
                print("Successfully addedd")
            elif fries == 0:
                break
            else:
                print("Invalid selection. Select again.")

        elif menu == 4:
            print("\nSUNDAE LIST") #Shows Sundae List
            print("1. Chocolate Sundae")
            print("2. Strawberry Sundae")
            print("3. Caramel Sundae")
            sundae = int(input("Select a sundae(1-3): "))

            if sundae == 1:
                amount = int(input("Amount: "))
                cart.append(f"{amount} x Chocolate Sundae")
                print("Successfully addedd")
            elif sundae == 0:
                break
            else:
                print("Invalid selection. Select again.")

        elif menu == 0:
            break

        else:
            print("Invalid selection. Select again.")


#Signup
print("SIGNUP")
username = input("Create a username: ")
password = input("Create a password: ")

while True:
#Attempts
    max_attempt = 3
    attempt = 0
    cart = []

    #Login
    while max_attempt:
        print("\nLOGIN")
        login_username = input("Username: ")
        login_password = input("Password: ")

        if login_username == username and login_password == password:
            print("Login success!")
            print("\nWelcome," , username.upper())

            while True:
                print('''
+--------------------------------+
|    MCJOBBILEE (っ ᐛ )っ🍔🍟    |
+--------------------------------+
                ''')
                print("1. Order")
                print("2. View Cart")
                action = int(input("What do you want to do? (1-2): "))

                if action == 1: #Menu Options
                    showMenu()

                if action == 2: #Show Cart
                    while True:
                        print('''
+------------------------+
|    🛒    CART     🛒  |
+------------------------+
                        ''')
                        print(*cart, sep="\n")
                        print("1. Add Order")
                        print("2. Delete Order")
                        print("3. Checkout")
                        print("0. Back")
                        cart_action = int(input("What would you like to do? Choose (1-3): "))

                        if cart_action == 1:
                            showMenu()
                        
                        #elif cart_action == 2:   NEED BALIKAN
                        
                        #elif cart_action == 3:   NEED BALIKAN

                        elif cart_action == 0:
                            break

                        else: 
                            print("Invalid selection. Choose again.")
                else:
                    break

        else:
            attempt += 1
            max_attempt -= 1
            print("Invalid username/password.")
            print("You have" , max_attempt , "attempt(s).")

            if max_attempt == 0:
                print("\nYou have exceeded your limit. Try again later.")