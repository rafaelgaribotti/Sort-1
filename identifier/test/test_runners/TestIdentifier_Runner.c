#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Identifier)
{
  RUN_TEST_CASE(Identifier, TesteNormal);
  RUN_TEST_CASE(Identifier, TesteGrande);
  RUN_TEST_CASE(Identifier, TesteNumInicio);
  RUN_TEST_CASE(Identifier, TesteEspMeio1);
  RUN_TEST_CASE(Identifier, TesteZeroCarac);
  RUN_TEST_CASE(Identifier, TesteUmCarac);
  RUN_TEST_CASE(Identifier, TesteSeisCarac);
  RUN_TEST_CASE(Identifier, TesteSeteCarac);
  RUN_TEST_CASE(Identifier, TesteEspInicio1);
  RUN_TEST_CASE(Identifier, TesteEspInicio2);
  RUN_TEST_CASE(Identifier, TesteInfInicio1);
  RUN_TEST_CASE(Identifier, TesteInfInicio2);
  RUN_TEST_CASE(Identifier, TesteEspInicio3);
  RUN_TEST_CASE(Identifier, TesteEspInicio4);
  RUN_TEST_CASE(Identifier, TesteLimLetras);
  RUN_TEST_CASE(Identifier, TesteLimNums1);
  RUN_TEST_CASE(Identifier, TesteEspMeio2);
  RUN_TEST_CASE(Identifier, TesteEspMeio3);
  RUN_TEST_CASE(Identifier, TesteEspMeio4);
  RUN_TEST_CASE(Identifier, TesteEspMeio5);
  RUN_TEST_CASE(Identifier, TesteLimNums2);
  RUN_TEST_CASE(Identifier, TesteLimNums3);
}
