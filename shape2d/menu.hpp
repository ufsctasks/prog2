#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <string>
#include <vector>


class Menu
{
  public:
  Menu();
  Menu(std::string title, std::vector<std::string> options);
  void display();
  void displayOption();

};

#endif