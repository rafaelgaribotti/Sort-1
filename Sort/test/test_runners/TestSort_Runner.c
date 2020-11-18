#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{
  RUN_TEST_CASE(Sort, testSelectionSort);
  RUN_TEST_CASE(Sort, testInsertionSort);
  RUN_TEST_CASE(Sort, testShellSort);
  RUN_TEST_CASE(Sort, testQuickSort);
  RUN_TEST_CASE(Sort, testHeapSort);
  RUN_TEST_CASE(Sort, testMergeSort);
}
