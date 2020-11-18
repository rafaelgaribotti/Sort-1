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



TEST(Sort, testSelectionSortCrescente)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {1,2,3,4,7,8,9}; // array que sera sorteado pelo metodo Selection
   
   
   sort_array(actual_array, 7, SELECTION); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando selection
   
   //printf("Tempo decorrido: %f s\n", get_elapsed_time());

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testSelectionSortDecrescente)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {9,8,7,4,3,2,1}; // array que sera sorteado pelo metodo Selection
   
   
   sort_array(actual_array, 7, SELECTION); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando selection
   
   //printf("Tempo decorrido: %f s\n", get_elapsed_time());

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testSelectionSortUmaPosicao)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {3,7,2,4,1,9,8}; // array que sera sorteado pelo metodo Selection
   
   
   sort_array(actual_array, 7, SELECTION); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando selection
   
   //printf("Tempo decorrido: %f s\n", get_elapsed_time());

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testSelectionSortQuaseOrdenado)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {1,2,3,7,4,8,9}; // array que sera sorteado pelo metodo Selection
   
   
   sort_array(actual_array, 7, SELECTION); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando selection
   
   //printf("Tempo decorrido: %f s\n", get_elapsedCrescente_time());

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testSelectionSortRandomico)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {4,7,2,1,8,3,9}; // array que sera sorteado pelo metodo Selection
   
   
   sort_array(actual_array, 7, SELECTION); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando selection
   
   //printf("Tempo decorrido: %f s\n", get_elapsed_time());

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testInsertionSortCrescente)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {1,2,3,4,7,8,9}; // array que sera sorteado pelo metodo Insertion
   
   
   sort_array(actual_array, 7, INSERTION); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando insertion
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testInsertionSortDecrescente)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {9,8,7,4,3,2,1}; // array que sera sorteado pelo metodo Insertion
   
   
   sort_array(actual_array, 7, INSERTION); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando insertion
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testInsertionSortUmaPosicao)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {3,7,2,4,1,9,8}; // array que sera sorteado pelo metodo Insertion
   
   
   sort_array(actual_array, 7, INSERTION); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando insertion
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testInsertionSortQuaseOrdenado)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {1,2,3,7,4,8,9}; // array que sera sorteado pelo metodo Insertion
   
   
   sort_array(actual_array, 7, INSERTION); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando insertion
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testInsertionSortRandomico)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {4,7,2,1,8,3,9}; // array que sera sorteado pelo metodo Insertion
   
   
   sort_array(actual_array, 7, INSERTION); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando insertion
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testShellSortCrescente)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {1,2,3,4,7,8,9}; // array que sera sorteado pelo metodo Shell
   
   
   sort_array(actual_array, 7, SHELL); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando shell
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testShellSortDecrescente)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {9,8,7,4,3,2,1}; // array que sera sorteado pelo metodo Shell
   
   
   sort_array(actual_array, 7, SHELL); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando shell
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testShellSortUmaPosicao)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {3,7,2,4,1,9,8}; // array que sera sorteado pelo metodo Shell
   
   
   sort_array(actual_array, 7, SHELL); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando shell
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testShellSortQuaseOrdenado)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {1,2,3,7,4,8,9}; // array que sera sorteado pelo metodo Shell
   
   
   sort_array(actual_array, 7, SHELL); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando shell
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testShellSortRandomico)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {4,7,2,1,8,3,9}; // array que sera sorteado pelo metodo Shell
   
   
   sort_array(actual_array, 7, SHELL); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando shell
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testQuickSortCrescente)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {1,2,3,4,7,8,9}; // array que sera sorteado pelo metodo Quick
   
   
   sort_array(actual_array, 7, QUICK); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando quick
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testQuickSortDecrescente)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {9,8,7,4,3,2,1}; // array que sera sorteado pelo metodo Quick
   
   
   sort_array(actual_array, 7, QUICK); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando quick
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testQuickSortUmaPosicao)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {3,7,2,4,1,9,8}; // array que sera sorteado pelo metodo Quick
   
   
   sort_array(actual_array, 7, QUICK); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando quick
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testQuickSortQuaseOrdenado)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {1,2,3,7,4,8,9}; // array que sera sorteado pelo metodo Quick
   
   
   sort_array(actual_array, 7, QUICK); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando quick
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testQuickSortRandomico)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {4,7,2,1,8,3,9}; // array que sera sorteado pelo metodo Quick
   
   
   sort_array(actual_array, 7, QUICK); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando quick
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testHeapSortCrescente)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {1,2,3,4,7,8,9}; // array que sera sorteado pelo metodo Heap
   
   
   sort_array(actual_array, 7, HEAP); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando heap
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testHeapSortDecrescente)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {9,8,7,4,3,2,1}; // array que sera sorteado pelo metodo Heap
   
   
   sort_array(actual_array, 7, HEAP); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando heap
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testHeapSortUmaPosicao)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {3,7,2,4,1,9,8}; // array que sera sorteado pelo metodo Heap
   
   
   sort_array(actual_array, 7, HEAP); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando heap
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testHeapSortQuaseOrdenado)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {1,2,3,7,4,8,9}; // array que sera sorteado pelo metodo Heap
   
   
   sort_array(actual_array, 7, HEAP); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando heap
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testHeapSortRandomico)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {4,7,2,1,8,3,9}; // array que sera sorteado pelo metodo Heap
   
   
   sort_array(actual_array, 7, HEAP); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando heap
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testMergeSortCrescente)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {1,2,3,4,7,8,9}; // array que sera sorteado pelo metodo Merge
   
   
   sort_array(actual_array, 7, MERGE); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando merge
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testMergeSortDecrescente)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {9,8,7,4,3,2,1}; // array que sera sorteado pelo metodo Merge
   
   
   sort_array(actual_array, 7, MERGE); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando merge
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testMergeSortUmaPosicao)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {3,7,2,4,1,9,8}; // array que sera sorteado pelo metodo Merge
   
   
   sort_array(actual_array, 7, MERGE); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando merge
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testMergeSortQuaseOrdenado)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {1,2,3,7,4,8,9}; // array que sera sorteado pelo metodo Merge
   
   
   sort_array(actual_array, 7, MERGE); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando merge
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}

TEST(Sort, testMergeSortRandomico)
{
   int expected_array[7] = {1,2,3,4,7,8,9}; // array esperado
   int actual_array[7] =   {4,7,2,1,8,3,9}; // array que sera sorteado pelo metodo Merge
   
   
   sort_array(actual_array, 7, MERGE); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos aleatoria e as ordena utilizando merge
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected_array, actual_array, 7); 
  
}
