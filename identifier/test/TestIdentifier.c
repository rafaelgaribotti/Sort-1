#include "identifier.h"
#include "unity.h"
#include "unity_fixture.h"
#include <string.h>

TEST_GROUP(Identifier);

TEST_SETUP(Identifier)
{
}

TEST_TEAR_DOWN(Identifier)
{
}

TEST(Identifier, TesteNormal)
{
  char str[] = "Jose1";
  TEST_ASSERT_EQUAL(0, identifier(strlen(str), str));
}

TEST(Identifier, TesteGrande)
{
  char str[] = "Arnaldo2";
  TEST_ASSERT_EQUAL(1, identifier(strlen(str), str));
}

TEST(Identifier, TesteNumInicio)
{
  char str[] = "42B";
  TEST_ASSERT_EQUAL(1, identifier(strlen(str), str));
}

TEST(Identifier, TesteEspMeio1)
{
  char str[] = "Jo+o";
  TEST_ASSERT_EQUAL(1, identifier(strlen(str), str));
}

TEST(Identifier, TesteZeroCarac)
{
  char str[] = "";
  TEST_ASSERT_EQUAL(1, identifier(strlen(str), str));
}

TEST(Identifier, TesteUmCarac)
{
  char str[] = "Z";
  TEST_ASSERT_EQUAL(0, identifier(strlen(str), str));
}

TEST(Identifier, TesteSeisCarac)
{
  char str[] = "ABCDEF";
  TEST_ASSERT_EQUAL(0, identifier(strlen(str), str));
}

TEST(Identifier, TesteSeteCarac)
{
  char str[] = "ABCDEFG";
  TEST_ASSERT_EQUAL(1, identifier(strlen(str), str));
}

TEST(Identifier, TesteEspInicio1)
{
  char str[] = "@abc";
  TEST_ASSERT_EQUAL(1, identifier(strlen(str), str));
}

TEST(Identifier, TesteEspInicio2)
{
  char str[] = "[bda";
  TEST_ASSERT_EQUAL(1, identifier(strlen(str), str));
}

TEST(Identifier, TesteInfInicio1)
{
  char str[] = "adb";
  TEST_ASSERT_EQUAL(0, identifier(strlen(str), str));
}

TEST(Identifier, TesteInfInicio2)
{
  char str[] = "zbat";
  TEST_ASSERT_EQUAL(0, identifier(strlen(str), str));
}

TEST(Identifier, TesteEspInicio3)
{
  char str[] = "`ikl";
  TEST_ASSERT_EQUAL(1, identifier(strlen(str), str));
}

TEST(Identifier, TesteEspInicio4)
{
  char str[] = "{nmj";
  TEST_ASSERT_EQUAL(1, identifier(strlen(str), str));
}

TEST(Identifier, TesteLimLetras)
{
  char str[] = "OAZaz";
  TEST_ASSERT_EQUAL(0, identifier(strlen(str), str));
}

TEST(Identifier, TesteLimNums1)
{
  char str[] = "O09";
  TEST_ASSERT_EQUAL(0, identifier(strlen(str), str));
}

TEST(Identifier, TesteEspMeio2)
{
  char str[] = "O@z";
  TEST_ASSERT_EQUAL(1, identifier(strlen(str), str));
}

TEST(Identifier, TesteEspMeio3)
{
  char str[] = "O[z";
  TEST_ASSERT_EQUAL(1, identifier(strlen(str), str));
}

TEST(Identifier, TesteEspMeio4)
{
  char str[] = "O`z";
  TEST_ASSERT_EQUAL(1, identifier(strlen(str), str));
}

TEST(Identifier, TesteEspMeio5)
{
  char str[] = "O{z";
  TEST_ASSERT_EQUAL(1, identifier(strlen(str), str));
}

TEST(Identifier, TesteLimNums2)
{
  char str[] = "O/z";
  TEST_ASSERT_EQUAL(1, identifier(strlen(str), str));
}

TEST(Identifier, TesteLimNums3)
{
  char str[] = "O:z";
  TEST_ASSERT_EQUAL(1, identifier(strlen(str), str));
}
