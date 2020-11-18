#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{
  RUN_TEST_CASE(Sort, testSelectionSortCrescente);
  RUN_TEST_CASE(Sort, testSelectionSortDecrescente);
  RUN_TEST_CASE(Sort, testSelectionSortUmaPosicao);
  RUN_TEST_CASE(Sort, testSelectionSortQuaseOrdenado);
  RUN_TEST_CASE(Sort, testSelectionSortRandomico);
  RUN_TEST_CASE(Sort, testInsertionSortCrescente);
  RUN_TEST_CASE(Sort, testInsertionSortDecrescente);
  RUN_TEST_CASE(Sort, testInsertionSortUmaPosicao);
  RUN_TEST_CASE(Sort, testInsertionSortQuaseOrdenado);
  RUN_TEST_CASE(Sort, testInsertionSortRandomico);
  RUN_TEST_CASE(Sort, testShellSortCrescente);
  RUN_TEST_CASE(Sort, testShellSortDecrescente);
  RUN_TEST_CASE(Sort, testShellSortUmaPosicao);
  RUN_TEST_CASE(Sort, testShellSortQuaseOrdenado);
  RUN_TEST_CASE(Sort, testShellSortRandomico);
  RUN_TEST_CASE(Sort, testQuickSortCrescente);
  RUN_TEST_CASE(Sort, testQuickSortDecrescente);
  RUN_TEST_CASE(Sort, testQuickSortUmaPosicao);
  RUN_TEST_CASE(Sort, testQuickSortQuaseOrdenado);
  RUN_TEST_CASE(Sort, testQuickSortRandomico);  
  RUN_TEST_CASE(Sort, testHeapSortCrescente);
  RUN_TEST_CASE(Sort, testHeapSortDecrescente);
  RUN_TEST_CASE(Sort, testHeapSortUmaPosicao);
  RUN_TEST_CASE(Sort, testHeapSortQuaseOrdenado);
  RUN_TEST_CASE(Sort, testHeapSortRandomico);
  RUN_TEST_CASE(Sort, testMergeSortCrescente);
  RUN_TEST_CASE(Sort, testMergeSortDecrescente);
  RUN_TEST_CASE(Sort, testMergeSortUmaPosicao);
  RUN_TEST_CASE(Sort, testMergeSortQuaseOrdenado);
  RUN_TEST_CASE(Sort, testMergeSortRandomico);
}
