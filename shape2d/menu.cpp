#include "menu.hpp"

Menu::display(){
  std::cout << “UFSC SHAPE MANAGER” << std::endl;
  std::cout << “-----------------------------------” << std::endl;
  std::cout << “1. Insert a Circle” << std::endl;
  std::cout << “2. Insert a Triangle” << std::endl;
  std::cout << “3. Insert a Square” << std::endl;
  std::cout << “4. Insert a Polygon” << std::endl;
  std::cout << “5. Show Perimeters” << std::endl;
  std::cout << “6. Quit” << std::std::endl;
  std::cout << “Choose an option: ” << std::endl;
  std::cin >> option;
  displayOption(option);
  system(“clear”);
};

Menu::displayOption(int option){
  switch(option){
    case 1:
    //TODO: Pass the arguments on circle constructor and push them to a Shapes vector
      circle = new Circle();
      break;
    case 2:
      //TODO: Pass the arguments on triangle constructor and push them to a Shapes vector
      triangle = new Triangle();
      break;
    case 3:
      //TODO: Pass the arguments on square constructor and push them to a Shapes vector
      square = new Square();
      break;
    case 4:
      //TODO: Pass the arguments on polygon constructor and push them to a Shapes vector
      polygon = new Polygon();
      break;
    case 5:
      // Show Perimeters

      break;
    case 6:
      break;
    default:
      std::cout << “Invalid option” << std::endl;
      break;
  };
};