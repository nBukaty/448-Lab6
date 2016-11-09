/**
*	@file Test.h
*	@author Nick Bukaty
*	@date 11-2-2016
*	@brief test class for LinkedListOfInts
*/

#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <vector>
#include <string>

#include "LinkedListOfInts.h"

//template typename<T>
class Test
{

public:

  void runTests(); //run all of the tests
  bool testIsEmpty();
  bool testSize();
  bool testSearch();
  bool testAddBack();
  bool testAddFront();
  bool testRemoveBack();
  bool testRemoveFront();
private:
  void printResults(bool isPassed, std::string message);
};

#endif
