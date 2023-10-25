/* Copyright 2023 Dual Tachyon
 * https://github.com/DualTachyon
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 */

#ifndef BK4819_REGS_H
#define BK4819_REGS_H

enum bk4819_gpio_pin_e {
 BK4819_GPIO0_PIN28_RX_ENABLE = 0,
 BK4819_GPIO1_PIN29_PA_ENABLE = 1,
 BK4819_GPIO3_PIN31_UHF_LNA   = 3,
 BK4819_GPIO4_PIN32_VHF_LNA   = 4,
 BK4819_GPIO5_PIN1_RED        = 5,
 BK4819_GPIO6_PIN2_GREEN      = 6
};
typedef enum bk4819_gpio_pin_e bk4819_gpio_pin_t;

// REG 02

#define BK4819_REG_02_SHIFT_FSK_TX_FINISHED        15
#define BK4819_REG_02_SHIFT_FSK_FIFO_ALMOST_EMPTY  14
#define BK4819_REG_02_SHIFT_FSK_RX_FINISHED        13
#define BK4819_REG_02_SHIFT_FSK_FIFO_ALMOST_FULL   12
#define BK4819_REG_02_SHIFT_DTMF_5TONE_FOUND       11
#define BK4819_REG_02_SHIFT_CxCSS_TAIL             10
#define BK4819_REG_02_SHIFT_CDCSS_FOUND             9
#define BK4819_REG_02_SHIFT_CDCSS_LOST              8
#define BK4819_REG_02_SHIFT_CTCSS_FOUND             7
#define BK4819_REG_02_SHIFT_CTCSS_LOST              6
#define BK4819_REG_02_SHIFT_VOX_FOUND               5
#define BK4819_REG_02_SHIFT_VOX_LOST                4
#define BK4819_REG_02_SHIFT_SQUELCH_FOUND           3
#define BK4819_REG_02_SHIFT_SQUELCH_LOST            2
#define BK4819_REG_02_SHIFT_FSK_RX_SYNC             1

#define BK4819_REG_02_MASK_FSK_TX_FINISHED          (1U << BK4819_REG_02_SHIFT_FSK_TX)
#define BK4819_REG_02_MASK_FSK_FIFO_ALMOST_EMPTY    (1U << BK4819_REG_02_SHIFT_FSK_FIFO_ALMOST_EMPTY)
#define BK4819_REG_02_MASK_FSK_RX_FINISHED          (1U << BK4819_REG_02_SHIFT_FSK_RX_FINISHED)
#define BK4819_REG_02_MASK_FSK_FIFO_ALMOST_FULL     (1U << BK4819_REG_02_SHIFT_FSK_FIFO_ALMOST_FULL)
#define BK4819_REG_02_MASK_DTMF_5TONE_FOUND         (1U << BK4819_REG_02_SHIFT_DTMF_5TONE_FOUND)
#define BK4819_REG_02_MASK_CxCSS_TAIL               (1U << BK4819_REG_02_SHIFT_CxCSS_TAIL)
#define BK4819_REG_02_MASK_CDCSS_FOUND              (1U << BK4819_REG_02_SHIFT_CDCSS_FOUND)
#define BK4819_REG_02_MASK_CDCSS_LOST               (1U << BK4819_REG_02_SHIFT_CDCSS_LOST)
#define BK4819_REG_02_MASK_CTCSS_FOUND              (1U << BK4819_REG_02_SHIFT_CTCSS_FOUND)
#define BK4819_REG_02_MASK_CTCSS_LOST               (1U << BK4819_REG_02_SHIFT_CTCSS_LOST)
#define BK4819_REG_02_MASK_VOX_FOUND                (1U << BK4819_REG_02_SHIFT_VOX_FOUND)
#define BK4819_REG_02_MASK_VOX_LOST                 (1U << BK4819_REG_02_SHIFT_VOX_LOST)
#define BK4819_REG_02_MASK_SQUELCH_FOUND            (1U << BK4819_REG_02_SHIFT_SQUELCH_FOUND)
#define BK4819_REG_02_MASK_SQUELCH_LOST             (1U << BK4819_REG_02_SHIFT_SQUELCH_LOST)
#define BK4819_REG_02_MASK_FSK_RX_SYNC              (1U << BK4819_REG_02_SHIFT_FSK_RX_SYNC)

#define BK4819_REG_02_FSK_TX_FINISHED               (1U << BK4819_REG_02_SHIFT_FSK_TX_FINISHED)
#define BK4819_REG_02_FSK_FIFO_ALMOST_EMPTY         (1U << BK4819_REG_02_SHIFT_FSK_FIFO_ALMOST_EMPTY)
#define BK4819_REG_02_FSK_RX_FINISHED               (1U << BK4819_REG_02_SHIFT_FSK_RX_FINISHED)
#define BK4819_REG_02_FSK_FIFO_ALMOST_FULL          (1U << BK4819_REG_02_SHIFT_FSK_FIFO_ALMOST_FULL)
#define BK4819_REG_02_DTMF_5TONE_FOUND              (1U << BK4819_REG_02_SHIFT_DTMF_5TONE_FOUND)
#define BK4819_REG_02_CxCSS_TAIL                    (1U << BK4819_REG_02_SHIFT_CxCSS_TAIL)
#define BK4819_REG_02_CDCSS_FOUND                   (1U << BK4819_REG_02_SHIFT_CDCSS_FOUND)
#define BK4819_REG_02_CDCSS_LOST                    (1U << BK4819_REG_02_SHIFT_CDCSS_LOST)
#define BK4819_REG_02_CTCSS_FOUND                   (1U << BK4819_REG_02_SHIFT_CTCSS_FOUND)
#define BK4819_REG_02_CTCSS_LOST                    (1U << BK4819_REG_02_SHIFT_CTCSS_LOST)
#define BK4819_REG_02_VOX_FOUND                     (1U << BK4819_REG_02_SHIFT_VOX_FOUND)
#define BK4819_REG_02_VOX_LOST                      (1U << BK4819_REG_02_SHIFT_VOX_LOST)
#define BK4819_REG_02_SQUELCH_CLOSED                (1U << BK4819_REG_02_SHIFT_SQUELCH_FOUND)
#define BK4819_REG_02_SQUELCH_OPENED                (1U << BK4819_REG_02_SHIFT_SQUELCH_LOST)
#define BK4819_REG_02_FSK_RX_SYNC                   (1U << BK4819_REG_02_SHIFT_FSK_RX_SYNC)

// REG 07

#define BK4819_REG_07_SHIFT_FREQUENCY_MODE          13
#define BK4819_REG_07_SHIFT_FREQUENCY                0

#define BK4819_REG_07_MASK_FREQUENCY_MODE          (0x0007U << BK4819_REG_07_SHIFT_FREQUENCY_MODE)
#define BK4819_REG_07_MASK_FREQUENCY               (0x1FFFU << BK4819_REG_07_SHIFT_FREQUENCY)

#define BK4819_REG_07_MODE_CTC1                    (0U << BK4819_REG_07_SHIFT_FREQUENCY_MODE)
#define BK4819_REG_07_MODE_CTC2                    (1U << BK4819_REG_07_SHIFT_FREQUENCY_MODE)
#define BK4819_REG_07_MODE_CDCSS                   (2U << BK4819_REG_07_SHIFT_FREQUENCY_MODE)

// REG 24

#define BK4819_REG_24_SHIFT_UNKNOWN_15   15
#define BK4819_REG_24_SHIFT_THRESHOLD    7
#define BK4819_REG_24_SHIFT_UNKNOWN_6    6
#define BK4819_REG_24_SHIFT_ENABLE       5
#define BK4819_REG_24_SHIFT_SELECT       4
#define BK4819_REG_24_SHIFT_MAX_SYMBOLS  0

#define BK4819_REG_24_MASK_THRESHOLD     (0x2Fu << BK4819_REG_24_SHIFT_THRESHOLD)
#define BK4819_REG_24_MASK_ENABLE        (0x01u << BK4819_REG_24_SHIFT_ENABLE)
#define BK4819_REG_24_MASK_SELECT        (0x04u << BK4819_REG_24_SHIFT_SELECT)
#define BK4819_REG_24_MASK_MAX_SYMBOLS   (0x0Fu << BK4819_REG_24_SHIFT_MAX_SYMBOLS)

#define BK4819_REG_24_ENABLE             (1u << BK4819_REG_24_SHIFT_ENABLE)
#define BK4819_REG_24_DISABLE            (0u << BK4819_REG_24_SHIFT_ENABLE)
#define BK4819_REG_24_SELECT_DTMF        (1u << BK4819_REG_24_SHIFT_SELECT)
#define BK4819_REG_24_SELECT_SELCALL     (0u << BK4819_REG_24_SHIFT_SELECT)

// REG 30

#define BK4819_REG_30_SHIFT_ENABLE_VCO_CALIB    15
#define BK4819_REG_30_SHIFT_ENABLE_UNKNOWN      14
#define BK4819_REG_30_SHIFT_ENABLE_RX_LINK      10
#define BK4819_REG_30_SHIFT_ENABLE_AF_DAC        9
#define BK4819_REG_30_SHIFT_ENABLE_DISC_MODE     8
#define BK4819_REG_30_SHIFT_ENABLE_PLL_VCO       4
#define BK4819_REG_30_SHIFT_ENABLE_PA_GAIN       3
#define BK4819_REG_30_SHIFT_ENABLE_MIC_ADC       2
#define BK4819_REG_30_SHIFT_ENABLE_TX_DSP        1
#define BK4819_REG_30_SHIFT_ENABLE_RX_DSP        0

#define BK4819_REG_30_MASK_ENABLE_VCO_CALIB      (0x1U << BK4819_REG_30_SHIFT_ENABLE_VCO_CALIB)
#define BK4819_REG_30_MASK_ENABLE_UNKNOWN        (0x1U << BK4819_REG_30_SHIFT_ENABLE_UNKNOWN)
#define BK4819_REG_30_MASK_ENABLE_RX_LINK        (0xFU << BK4819_REG_30_SHIFT_ENABLE_RX_LINK)
#define BK4819_REG_30_MASK_ENABLE_AF_DAC         (0x1U << BK4819_REG_30_SHIFT_ENABLE_AF_DAC)
#define BK4819_REG_30_MASK_ENABLE_DISC_MODE      (0x1U << BK4819_REG_30_SHIFT_ENABLE_DISC_MODE)
#define BK4819_REG_30_MASK_ENABLE_PLL_VCO        (0xFU << BK4819_REG_30_SHIFT_ENABLE_PLL_VCO)
#define BK4819_REG_30_MASK_ENABLE_PA_GAIN        (0x1U << BK4819_REG_30_SHIFT_ENABLE_PA_GAIN)
#define BK4819_REG_30_MASK_ENABLE_MIC_ADC        (0x1U << BK4819_REG_30_SHIFT_ENABLE_MIC_ADC)
#define BK4819_REG_30_MASK_ENABLE_TX_DSP         (0x1U << BK4819_REG_30_SHIFT_ENABLE_TX_DSP)
#define BK4819_REG_30_MASK_ENABLE_RX_DSP         (0x1U << BK4819_REG_30_SHIFT_ENABLE_RX_DSP)

enum {
	BK4819_REG_30_ENABLE_VCO_CALIB   = (0x1U << BK4819_REG_30_SHIFT_ENABLE_VCO_CALIB),
	BK4819_REG_30_DISABLE_VCO_CALIB  = (0x0U << BK4819_REG_30_SHIFT_ENABLE_VCO_CALIB),
	BK4819_REG_30_ENABLE_UNKNOWN     = (0x1U << BK4819_REG_30_SHIFT_ENABLE_UNKNOWN),
	BK4819_REG_30_DISABLE_UNKNOWN    = (0x0U << BK4819_REG_30_SHIFT_ENABLE_UNKNOWN),
	BK4819_REG_30_ENABLE_RX_LINK     = (0xFU << BK4819_REG_30_SHIFT_ENABLE_RX_LINK),
	BK4819_REG_30_DISABLE_RX_LINK    = (0x0U << BK4819_REG_30_SHIFT_ENABLE_RX_LINK),
	BK4819_REG_30_ENABLE_AF_DAC      = (0x1U << BK4819_REG_30_SHIFT_ENABLE_AF_DAC),
	BK4819_REG_30_DISABLE_AF_DAC     = (0x0U << BK4819_REG_30_SHIFT_ENABLE_AF_DAC),
	BK4819_REG_30_ENABLE_DISC_MODE   = (0x1U << BK4819_REG_30_SHIFT_ENABLE_DISC_MODE),
	BK4819_REG_30_DISABLE_DISC_MODE  = (0x0U << BK4819_REG_30_SHIFT_ENABLE_DISC_MODE),
	BK4819_REG_30_ENABLE_PLL_VCO     = (0xFU << BK4819_REG_30_SHIFT_ENABLE_PLL_VCO),
	BK4819_REG_30_DISABLE_PLL_VCO    = (0x0U << BK4819_REG_30_SHIFT_ENABLE_PLL_VCO),
	BK4819_REG_30_ENABLE_PA_GAIN     = (0x1U << BK4819_REG_30_SHIFT_ENABLE_PA_GAIN),
	BK4819_REG_30_DISABLE_PA_GAIN    = (0x0U << BK4819_REG_30_SHIFT_ENABLE_PA_GAIN),
	BK4819_REG_30_ENABLE_MIC_ADC     = (0x1U << BK4819_REG_30_SHIFT_ENABLE_MIC_ADC),
	BK4819_REG_30_DISABLE_MIC_ADC    = (0x0U << BK4819_REG_30_SHIFT_ENABLE_MIC_ADC),
	BK4819_REG_30_ENABLE_TX_DSP      = (0x1U << BK4819_REG_30_SHIFT_ENABLE_TX_DSP),
	BK4819_REG_30_DISABLE_TX_DSP     = (0x0U << BK4819_REG_30_SHIFT_ENABLE_TX_DSP),
	BK4819_REG_30_ENABLE_RX_DSP      = (0x1U << BK4819_REG_30_SHIFT_ENABLE_RX_DSP),
	BK4819_REG_30_DISABLE_RX_DSP     = (0x0U << BK4819_REG_30_SHIFT_ENABLE_RX_DSP),
};

// REG 3F

#define BK4819_REG_3F_SHIFT_FSK_TX_FINISHED       15
#define BK4819_REG_3F_SHIFT_FSK_FIFO_ALMOST_EMPTY 14
#define BK4819_REG_3F_SHIFT_FSK_RX_FINISHED       13
#define BK4819_REG_3F_SHIFT_FSK_FIFO_ALMOST_FULL  12
#define BK4819_REG_3F_SHIFT_DTMF_5TONE_FOUND      11
#define BK4819_REG_3F_SHIFT_CxCSS_TAIL            10
#define BK4819_REG_3F_SHIFT_CDCSS_FOUND            9
#define BK4819_REG_3F_SHIFT_CDCSS_LOST             8
#define BK4819_REG_3F_SHIFT_CTCSS_FOUND            7
#define BK4819_REG_3F_SHIFT_CTCSS_LOST             6
#define BK4819_REG_3F_SHIFT_VOX_FOUND              5
#define BK4819_REG_3F_SHIFT_VOX_LOST               4
#define BK4819_REG_3F_SHIFT_SQUELCH_FOUND          3
#define BK4819_REG_3F_SHIFT_SQUELCH_LOST           2
#define BK4819_REG_3F_SHIFT_FSK_RX_SYNC            1

#define BK4819_REG_3F_MASK_FSK_TX_FINISHED         (1U << BK4819_REG_3F_SHIFT_FSK_TX)
#define BK4819_REG_3F_MASK_FSK_FIFO_ALMOST_EMPTY   (1U << BK4819_REG_3F_SHIFT_FSK_FIFO_ALMOST_EMPTY)
#define BK4819_REG_3F_MASK_FSK_RX_FINISHED         (1U << BK4819_REG_3F_SHIFT_FSK_RX_FINISHED)
#define BK4819_REG_3F_MASK_FSK_FIFO_ALMOST_FULL    (1U << BK4819_REG_3F_SHIFT_FSK_FIFO_ALMOST_FULL)
#define BK4819_REG_3F_MASK_DTMF_5TONE_FOUND        (1U << BK4819_REG_3F_SHIFT_DTMF_5TONE_FOUND)
#define BK4819_REG_3F_MASK_CxCSS_TAIL              (1U << BK4819_REG_3F_SHIFT_CxCSS_TAIL)
#define BK4819_REG_3F_MASK_CDCSS_FOUND             (1U << BK4819_REG_3F_SHIFT_CDCSS_FOUND)
#define BK4819_REG_3F_MASK_CDCSS_LOST              (1U << BK4819_REG_3F_SHIFT_CDCSS_LOST)
#define BK4819_REG_3F_MASK_CTCSS_FOUND             (1U << BK4819_REG_3F_SHIFT_CTCSS_FOUND)
#define BK4819_REG_3F_MASK_CTCSS_LOST              (1U << BK4819_REG_3F_SHIFT_CTCSS_LOST)
#define BK4819_REG_3F_MASK_VOX_FOUND               (1U << BK4819_REG_3F_SHIFT_VOX_FOUND)
#define BK4819_REG_3F_MASK_VOX_LOST                (1U << BK4819_REG_3F_SHIFT_VOX_LOST)
#define BK4819_REG_3F_MASK_SQUELCH_FOUND           (1U << BK4819_REG_3F_SHIFT_SQUELCH_FOUND)
#define BK4819_REG_3F_MASK_SQUELCH_LOST            (1U << BK4819_REG_3F_SHIFT_SQUELCH_LOST)
#define BK4819_REG_3F_MASK_FSK_RX_SYNC             (1U << BK4819_REG_3F_SHIFT_FSK_RX_SYNC)

#define BK4819_REG_3F_FSK_TX_FINISHED              (1U << BK4819_REG_3F_SHIFT_FSK_TX_FINISHED)
#define BK4819_REG_3F_FSK_FIFO_ALMOST_EMPTY        (1U << BK4819_REG_3F_SHIFT_FSK_FIFO_ALMOST_EMPTY)
#define BK4819_REG_3F_FSK_RX_FINISHED              (1U << BK4819_REG_3F_SHIFT_FSK_RX_FINISHED)
#define BK4819_REG_3F_FSK_FIFO_ALMOST_FULL         (1U << BK4819_REG_3F_SHIFT_FSK_FIFO_ALMOST_FULL)
#define BK4819_REG_3F_DTMF_5TONE_FOUND             (1U << BK4819_REG_3F_SHIFT_DTMF_5TONE_FOUND)
#define BK4819_REG_3F_CxCSS_TAIL                   (1U << BK4819_REG_3F_SHIFT_CxCSS_TAIL)
#define BK4819_REG_3F_CDCSS_FOUND                  (1U << BK4819_REG_3F_SHIFT_CDCSS_FOUND)
#define BK4819_REG_3F_CDCSS_LOST                   (1U << BK4819_REG_3F_SHIFT_CDCSS_LOST)
#define BK4819_REG_3F_CTCSS_FOUND                  (1U << BK4819_REG_3F_SHIFT_CTCSS_FOUND)
#define BK4819_REG_3F_CTCSS_LOST                   (1U << BK4819_REG_3F_SHIFT_CTCSS_LOST)
#define BK4819_REG_3F_VOX_FOUND                    (1U << BK4819_REG_3F_SHIFT_VOX_FOUND)
#define BK4819_REG_3F_VOX_LOST                     (1U << BK4819_REG_3F_SHIFT_VOX_LOST)
#define BK4819_REG_3F_SQUELCH_FOUND                (1U << BK4819_REG_3F_SHIFT_SQUELCH_FOUND)
#define BK4819_REG_3F_SQUELCH_LOST                 (1U << BK4819_REG_3F_SHIFT_SQUELCH_LOST)
#define BK4819_REG_3F_FSK_RX_SYNC                  (1U << BK4819_REG_3F_SHIFT_FSK_RX_SYNC)

// REG 51

#define BK4819_REG_51_SHIFT_ENABLE_CxCSS        15
#define BK4819_REG_51_SHIFT_GPIO6_PIN2_INPUT    14
#define BK4819_REG_51_SHIFT_TX_CDCSS_POLARITY   13
#define BK4819_REG_51_SHIFT_CxCSS_MODE          12
#define BK4819_REG_51_SHIFT_CDCSS_BIT_WIDTH     11
#define BK4819_REG_51_SHIFT_1050HZ_DETECTION    10
#define BK4819_REG_51_SHIFT_AUTO_CDCSS_BW       9
#define BK4819_REG_51_SHIFT_AUTO_CTCSS_BW       8
#define BK4819_REG_51_SHIFT_CxCSS_TX_GAIN1      0

#define BK4819_REG_51_MASK_ENABLE_CxCSS        (0x01U << BK4819_REG_51_SHIFT_ENABLE_CxCSS)
#define BK4819_REG_51_MASK_GPIO6_PIN2_INPUT    (0x01U << BK4819_REG_51_SHIFT_GPIO6_PIN2_INPUT)
#define BK4819_REG_51_MASK_TX_CDCSS_POLARITY   (0x01U << BK4819_REG_51_SHIFT_TX_CDCSS_POLARITY)
#define BK4819_REG_51_MASK_CxCSS_MODE          (0x01U << BK4819_REG_51_SHIFT_CxCSS_MODE)
#define BK4819_REG_51_MASK_CDCSS_BIT_WIDTH     (0x01U << BK4819_REG_51_SHIFT_CDCSS_BIT_WIDTH)
#define BK4819_REG_51_MASK_1050HZ_DETECTION    (0x01U << BK4819_REG_51_SHIFT_1050HZ_DETECTION)
#define BK4819_REG_51_MASK_AUTO_CDCSS_BW       (0x01U << BK4819_REG_51_SHIFT_AUTO_CDCSS_BW)
#define BK4819_REG_51_MASK_AUTO_CTCSS_BW       (0x01U << BK4819_REG_51_SHIFT_AUTO_CTCSS_BW)
#define BK4819_REG_51_MASK_CxCSS_TX_GAIN1      (0x7FU << BK4819_REG_51_SHIFT_CxCSS_TX_GAIN1)

enum {
	BK4819_REG_51_ENABLE_CxCSS          = (1U << BK4819_REG_51_SHIFT_ENABLE_CxCSS),
	BK4819_REG_51_DISABLE_CxCSS         = (0U << BK4819_REG_51_SHIFT_ENABLE_CxCSS),

	BK4819_REG_51_GPIO6_PIN2_INPUT      = (1U << BK4819_REG_51_SHIFT_GPIO6_PIN2_INPUT),
	BK4819_REG_51_GPIO6_PIN2_NORMAL     = (0U << BK4819_REG_51_SHIFT_GPIO6_PIN2_INPUT),

	BK4819_REG_51_TX_CDCSS_NEGATIVE     = (1U << BK4819_REG_51_SHIFT_TX_CDCSS_POLARITY),
	BK4819_REG_51_TX_CDCSS_POSITIVE     = (0U << BK4819_REG_51_SHIFT_TX_CDCSS_POLARITY),

	BK4819_REG_51_MODE_CTCSS            = (1U << BK4819_REG_51_SHIFT_CxCSS_MODE),
	BK4819_REG_51_MODE_CDCSS            = (0U << BK4819_REG_51_SHIFT_CxCSS_MODE),

	BK4819_REG_51_CDCSS_24_BIT          = (1U << BK4819_REG_51_SHIFT_CDCSS_BIT_WIDTH),
	BK4819_REG_51_CDCSS_23_BIT          = (0U << BK4819_REG_51_SHIFT_CDCSS_BIT_WIDTH),

	BK4819_REG_51_1050HZ_DETECTION      = (1U << BK4819_REG_51_SHIFT_1050HZ_DETECTION),
	BK4819_REG_51_1050HZ_NO_DETECTION   = (0U << BK4819_REG_51_SHIFT_1050HZ_DETECTION),

	BK4819_REG_51_AUTO_CDCSS_BW_DISABLE = (1U << BK4819_REG_51_SHIFT_AUTO_CDCSS_BW),
	BK4819_REG_51_AUTO_CDCSS_BW_ENABLE  = (0U << BK4819_REG_51_SHIFT_AUTO_CDCSS_BW),

	BK4819_REG_51_AUTO_CTCSS_BW_DISABLE = (1U << BK4819_REG_51_SHIFT_AUTO_CTCSS_BW),
	BK4819_REG_51_AUTO_CTCSS_BW_ENABLE  = (0U << BK4819_REG_51_SHIFT_AUTO_CTCSS_BW),
};

// *****************
// REG 70

#define BK4819_REG_70_SHIFT_ENABLE_TONE1        15
#define BK4819_REG_70_SHIFT_TONE1_TUNING_GAIN   8

#define BK4819_REG_70_SHIFT_ENABLE_TONE2        7
#define BK4819_REG_70_SHIFT_TONE2_TUNING_GAIN   0

#define BK4819_REG_70_MASK_ENABLE_TONE1         (0x01u << BK4819_REG_70_SHIFT_ENABLE_TONE1)
#define BK4819_REG_70_MASK_TONE1_TUNING_GAIN    (0x7Fu << BK4819_REG_70_SHIFT_TONE1_TUNING_GAIN)

#define BK4819_REG_70_MASK_ENABLE_TONE2         (0x01u << BK4819_REG_70_SHIFT_ENABLE_TONE2)
#define BK4819_REG_70_MASK_TONE2_TUNING_GAIN    (0x7Fu << BK4819_REG_70_SHIFT_TONE2_TUNING_GAIN)

enum {
 BK4819_REG_70_ENABLE_TONE1 = (1u << BK4819_REG_70_SHIFT_ENABLE_TONE1),
 BK4819_REG_70_ENABLE_TONE2 = (1u << BK4819_REG_70_SHIFT_ENABLE_TONE2)
};

// *****************

#endif
