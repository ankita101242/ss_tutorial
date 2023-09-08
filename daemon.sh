#! /bin/bash
echo "SELECT YOUR FAVORITE FRUIT"
echo "1. Apple"
echo "2. Grapes"
echo "3. Mango"
echo "4. Exit from menu"
echo -n "Enter your menu choice [1-4]: "

while true : 
do
	read choice
	case $choice in 
		1) echo "You have selected option 1"
		   echo "Selected Fruit is Apple. ";;
		2) echo "You have selected the option 2"
		   echo "Selected Fruit is Grapes." ;;
		3) echo "You have selected the option 3"
		   echo "Selected Fruit is Mango." ;;
		4) echo "Quitting..."
		   exit;;
		*) echo "Invalid option" ;;
	esac
		echo -n "Enter your menu choice [1-4]:"
done
