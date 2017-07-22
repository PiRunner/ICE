#ifndef OPERATOR_H
#define OPERATOR_H

#include <stdint.h>
#include <stdbool.h>

#define OUTPUT_IN_BC 0
#define OUTPUT_IN_DE 1
#define OUTPUT_IN_HL 2

#define NO_PUSH   false
#define NEED_PUSH true

#define TempString1 pixelShadow + 64000
#define TempString2 pixelShadow + 65000

uint8_t getIndexOfOperator(uint8_t);
uint24_t executeOperator(uint24_t, uint24_t, uint8_t);
void LD_HL_NUMBER(uint24_t);
void LD_HL_STRING(uint24_t);
uint8_t parseOperator(element_t*, element_t*, element_t*);

void insertFunctionReturn(uint24_t, uint8_t, bool);
void EQInsert(void);
void GEInsert(void);
void AddStringString(void);
void StoStringString(void);

void MultWithNumber(uint24_t, uint8_t*, bool);

extern const char operators[];
extern const uint8_t operatorPrecedence[];
extern const uint8_t operatorPrecedence2[];

#endif
