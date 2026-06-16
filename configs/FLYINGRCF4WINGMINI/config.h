/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU                       STM32F405

#define BOARD_NAME                          FLYINGRCF4WINGMINI
#define MANUFACTURER_ID                     FLRC

#define USE_ACC
#define USE_GYRO
#define USE_ACCGYRO_BMI270
#define USE_ACC_SPI_ICM42605
#define USE_GYRO_SPI_ICM42605

#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_DPS310

#ifndef USE_WING
#define USE_WING
#endif

#ifndef USE_SERVOS
#define USE_SERVOS
#endif

#define MOTOR1_PIN                          PC9
#define MOTOR2_PIN                          PC8
#define SERVO1_PIN                          PB15
#define SERVO2_PIN                          PA8
#define SERVO3_PIN                          PB11
#define SERVO4_PIN                          PB10

#define LED_STRIP_PIN                       PB1

#define UART1_TX_PIN                        PA9
#define UART1_RX_PIN                        PA10

#define UART2_RX_PIN                        PA3

#define UART4_TX_PIN                        PA0
#define UART4_RX_PIN                        PA1

#define UART5_TX_PIN                        PC12
#define UART5_RX_PIN                        PD2

#define I2C1_SCL_PIN                        PB8
#define I2C1_SDA_PIN                        PB7

#define LED0_PIN                            PA14
#define LED1_PIN                            PA13

#define SPI1_SCK_PIN                        PA5
#define SPI1_SDI_PIN                        PB4
#define SPI1_SDO_PIN                        PA7

#define GYRO_1_CS_PIN                       PC14
#define GYRO_1_SPI_INSTANCE                 SPI1
#define GYRO_1_ALIGN                        CW180_DEG_FLIP

#define ADC_VBAT_PIN                        PC4
#define ADC_CURR_PIN                        PC5

#define TIMER_PIN_MAPPING                   TIMER_PIN_MAP(0, PC9,  1,  1) \
                                            TIMER_PIN_MAP(1, PC8,  1,  1) \
                                            TIMER_PIN_MAP(2, PB15, 2, -1) \
                                            TIMER_PIN_MAP(3, PA8,  2, -1) \
                                            TIMER_PIN_MAP(4, PB11, 2, -1) \
                                            TIMER_PIN_MAP(5, PB10, 2, -1) \
                                            TIMER_PIN_MAP(6, PB1,  1,  0)

#define ADC1_DMA_OPT                        1
#define ADC_INSTANCE                        ADC1

#define SERIALRX_UART                       SERIAL_PORT_USART1
#define GPS_UART                            SERIAL_PORT_UART5
#define MSP_UART                            SERIAL_PORT_UART4

#define MAG_I2C_INSTANCE                    I2CDEV_1
#define BARO_I2C_INSTANCE                   I2CDEV_1

#define DEFAULT_MIXER                       MIXER_FLYING_WING
#define DEFAULT_RX_FEATURE                  FEATURE_RX_SERIAL
#define DEFAULT_DSHOT_BURST                 DSHOT_DMAR_OFF
#define DEFAULT_DSHOT_BITBANG               DSHOT_BITBANG_OFF
#define DEFAULT_CURRENT_METER_SOURCE        CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE        VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE         210
#define DEFAULT_CURRENT_METER_SCALE         150

#define SYSTEM_HSE_MHZ                      8
