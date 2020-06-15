#include "SfmlCtrl.h"
#include <iostream>

int main()
{
  SfmlCtrl sfmlCtrl1;
  sfmlCtrl1.index = 7;
  sfmlCtrl1.name = "The ultra delux controller pad";
  sfmlCtrl1.productId = 3827;
  sfmlCtrl1.vendorId = 1234;
  sfmlCtrl1. vendorName = "Jack Cowdry";

  std::cout << "Controller Index: " << sfmlCtrl1.index << std::endl;
  std::cout << "Controller Name: " << sfmlCtrl1.name << std::endl;
  std::cout << "Controller Product ID: " << sfmlCtrl1.productId << std::endl;
  std::cout << "Controller Vendor ID: " << sfmlCtrl1.vendorId << std::endl;
  std::cout << "Controller Vendor Name: " << sfmlCtrl1.vendorName << std::endl;

  return 0;
}
