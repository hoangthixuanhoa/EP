#include <stdio.h>
#include <stdint.h>

#define SET_BIT(pos) (1u << (pos))

typedef struct
{
    uint32_t CR;
    uint32_t CFGR;
    uint32_t CIR;
    uint32_t APB2RSTR;
    uint32_t APB1RSTR;
    uint32_t AHBENR;
    uint32_t APB2ENR;
    uint32_t APB1ENR;
    uint32_t BDCR;
    uint32_t CSR;
    uint32_t AHBRSTR;
    uint32_t CFGR2;

} RCC_TYPE;

typedef struct
{
    uint32_t GPIOC_CRL;
    uint32_t GPIOC_CRH;
    uint32_t GPIOC_IDR;
    uint32_t GPIOC_ODR;
    uint32_t GPIOC_BSRR;
    uint32_t GPIOC_BRR;
    uint32_t GPIOC_LCKR;
} GPIOC_TYPE;


#define RCC (RCC_TYPE *)(0x40021000U)

#define RCC_APB2ENR_IOPCE_SHIFT (4u)
#define RCC_APB2ENR_IOPCE_MASK (0x10u)
#define RCC_APB2ENR_IOPCE(x) (((x) << RCC_APB2ENR_IOPCE_SHIFT) & RCC_APB2ENR_IOPCE_MASK)


#define GPIOC (GPIOC_TYPE *)(0x40011000U)

#define GPIOC_ODR_IOPCE_SHIFT (13u)
#define GPIOC_ODR_IOPCE_MASK (0x1000u)
#define GPIOC_ODR_IOPCE(x) (((x) << GPIOC_ODR_IOPCE_SHIFT) & GPIOC_ODR_IOPCE_MASK)



int main()
{
    RCC_TYPE *rcc_base = RCC;

    rcc_base->APB2ENR != RCC_APB2ENR_IOPCE(1);

    return 0;
}
