#include "get_opt.h"
#include "array.h"
#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}



TEST(Sort, testSelectionSort)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {4,7,2,1,8,3,9}; // array que sera sorteado pelo metodo Selection
   
   
   sort_array(actual_array, 7, SELECTION); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando selection
   
   //printf("Tempo decorrido: %f s\n", get_elapsed_time());

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testInsertionSort)
{
   int expected_array[7] = {2,3,5,7,8,9,9}; // array esperado
   int actual_array[7] =   {3,2,5,7,8,9,9}; // array que sera sorteado pelo metodo Insertion
   
   
   sort_array(actual_array, 7, INSERTION); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando insertion
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testShellSort)
{
   int expected_array[7] = {1,2,4,6,7,8,9}; // array esperado
   int actual_array[7] =   {9,1,2,6,4,7,8}; // array que sera sorteado pelo metodo Shell
   
   
   sort_array(actual_array, 7, SHELL); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando shell
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testQuickSort)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {7,4,8,9,3,2,1}; // array que sera sorteado pelo metodo Quick
   
   
   sort_array(actual_array, 7, QUICK); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando quick
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testHeapSort)
{
   int expected_array[7] = {0,2,3,4,5,8,8}; // array esperado
   int actual_array[7] =   {5,8,0,2,3,4,8}; // array que sera sorteado pelo metodo Heap
   
   
   sort_array(actual_array, 7, HEAP); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando heap
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testMergeSort)
{
   int expected_array[7] = {1,2,3,3,5,7,9}; // array esperado
   int actual_array[7] =   {3,5,7,9,1,2,3}; // array que sera sorteado pelo metodo Merge
   
   
   sort_array(actual_array, 7, MERGE); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando merge
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}
