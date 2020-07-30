/* W5500 Ethernet over SPI
 */

#include <kernel.h>
#include <drivers/gpio.h>

#ifndef _W5500_
#define _W5500_

/* Common Register Block
 * This is for info such as MAC and IP Address.
 * See section 3.1 of datasheet.
 */

#define W5500_REG_MR 0x0000

/* Gateway IP */
#define W5500_REG_GAR0 0x0001
#define W5500_REG_GAR1 0x0002
#define W5500_REG_GAR2 0x0003
#define W5500_REG_GAR3 0x0004

/* Subnet Mask IP */
#define W5500_REG_SUBR0 0x0005
#define W5500_REG_SUBR1 0x0006
#define W5500_REG_SUBR2 0x0007
#define W5500_REG_SUBR3 0x0008

/* Device MAC Address */
#define W5500_REG_SHAR0 0x0009
#define W5500_REG_SHAR1 0x000A
#define W5500_REG_SHAR2 0x000B
#define W5500_REG_SHAR3 0x000C
#define W5500_REG_SHAR4 0x000D
#define W5500_REG_SHAR5 0x000E

/* Device IP Address */
#define W5500_REG_SIPR0 0x000F
#define W5500_REG_SIPR1 0x0010
#define W5500_REG_SIPR2 0x0011
#define W5500_REG_SIPR3 0x0012

/* Interrupt Timer */
#define W5500_REG_INTLEVEL0 0x0013
#define W5500_REG_INTLEVEL1 0x0014

/* Interrupt */
#define W5500_REG_IR 0x0015

/* Interrupt Mask */
#define W5500_REG_IMR 0x0016

/* Socket Interrupt */
#define W5500_REG_SIR 0x0017

/* Socket Interrupt Mask */
#define W5500_REG_SIMR 0x0018

/* Retry Time */
#define W5500_REG_RTR0 0x0019
#define W5500_REG_RTR1 0x001A

/* Retry Count */
#define W5500_REG_RCR 0x001B

/* PPP LCP Request Timer */
#define W5500_REG_PTIMER 0x001C

/* PPP LCP Magic Number */
#define W5500_REG_PMAGIC 0x001D

/* PPP Mac Address */
#define W5500_REG_PHAR0 0x001E
#define W5500_REG_PHAR1 0x001F
#define W5500_REG_PHAR2 0x0020
#define W5500_REG_PHAR3 0x0021
#define W5500_REG_PHAR4 0x0022
#define W5500_REG_PHAR5 0x0023

/* PPP Session Identification */
#define W5500_REG_PSID0 0x0024
#define W5500_REG_PSID1 0x0025

/* PPP Max Segment Size */
#define W5500_REG_PMRU0 0x0026
#define W5500_REG_PMRU1 0x0027

/* Unreachable IP Address */
#define W5500_REG_UIPR0 0x0028
#define W5500_REG_UIPR1 0x0029
#define W5500_REG_UIPR2 0x002A
#define W5500_REG_UIPR3 0x002B

/* Unreachable Port */
#define W5500_REG_UPORTR0 0x002C
#define W5500_REG_UPORTR1 0x002D

/* PHY Config */
#define W5500_REG_PHYCFGR 0x002E

/* W5500 Version */
#define W5500_REG_VERSIONR 0x0039

/* TODO Add Socket Register Definitions.
 * See Section 3.2 of datasheet.
 */

#endif
