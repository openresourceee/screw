#ifndef _BOARD_CONFIG_
#define _BOARD_CONFIG_

#define  OV5640             0
#define  OV2640             1

#define  BOARD_KD233        0
#define  BOARD_LICHEEDAN    0
#define  BOARD_GUARD        0
#define  BOARD_PADDLEPI     1



/* spi > WiFi */
#define		SPI_DEVICE					SPI_DEVICE_1
#define		SPI_CS_SELECT				SPI_CHIP_SELECT_0
#define		SPI_DMA_TX_CHL				DMAC_CHANNEL3
#define		SPI_DMA_RX_CHL				DMAC_CHANNEL4

/* i2s > Led */
#define		LED_DEVICE					I2S_DEVICE_1
#define		LED_DEVICE_CHL				I2S_CHANNEL_3
#define		LED_DMA_TX_CHL				DMAC_CHANNEL2

/* IO map */
#if	 BOARD_KD233
#define 	W600_INTERRUPT_PIN   		27
#define 	W600_RESET_PIN       		24
#define		W600_SPI_CS_PIN				30
#define		W600_SPI_CLK_PIN			32
#define		W600_SPI_MOSI_PIN			34
#define		W600_SPI_MISO_PIN			31

#define		OV_RST_PIN					11
#define		OV_VSYNC_PIN				12
#define		OV_PWDN_PIN					13
#define		OV_HREF_PIN					17
#define		OV_PCLK_PIN					15
#define		OV_XCLK_PIN					14
#define		OV_SCCB_SCLK_PIN			10
#define		OV_SCCB_SDA_PIN				9	

#define		LCD_CS_PIN					6
#define		LCD_DC_PIN					8
#define		LCD_RW_PIN					7

#define		KEY_PIN						26
#define		BUZZ_PIN					46
#define		LED_PIN						40
#define		RELAY_PIN					42

#elif BOARD_GUARD
/* W600 */
#define 	W600_INTERRUPT_PIN   		11
#define 	W600_RESET_PIN       		6
#define		W600_SPI_CS_PIN				9
#define		W600_SPI_CLK_PIN			10
#define		W600_SPI_MOSI_PIN			7
#define		W600_SPI_MISO_PIN			8
/* OV2640 */
#define		OV_RST_PIN					18
#define		OV_VSYNC_PIN				19
#define		OV_PWDN_PIN					20
#define		OV_HREF_PIN					33
#define		OV_PCLK_PIN					34
#define		OV_XCLK_PIN					35
#define		OV_SCCB_SCLK_PIN			21
#define		OV_SCCB_SDA_PIN				23	
/* LCD */
// #define		LCD_CS_PIN					28
// #define		LCD_DC_PIN					27
// #define		LCD_RW_PIN					26
// #define		LCD_RST_PIN					29
/* KEY */
#define		KEY_PIN						44
/* BUZZ*/
#define		BUZZ_PIN					46
/* LED*/
#define		LED_PIN						45
/* RELAY*/
#define		RELAY_PIN					43

#elif BOARD_PADDLEPI
#define 	W600_INTERRUPT_PIN   		19
#define 	W600_RESET_PIN       		23
#define		W600_SPI_CS_PIN				20
#define		W600_SPI_CLK_PIN			18
#define		W600_SPI_MOSI_PIN			21
#define		W600_SPI_MISO_PIN			22
/* OV2640 */
#define		OV_RST_PIN					43
#define		OV_VSYNC_PIN				42
#define		OV_PWDN_PIN					45
#define		OV_HREF_PIN					44
#define		OV_PCLK_PIN					47
#define		OV_XCLK_PIN					46
#define		OV_SCCB_SCLK_PIN			41
#define		OV_SCCB_SDA_PIN				40	
/* LCD */
#define		LCD_CS_PIN					38
#define		LCD_DC_PIN					37
#define		LCD_RW_PIN					36
#define		LCD_RST_PIN					39
/* KEY */
#define		KEY_PIN						13
/* IR-CUT */
#define     IRCUTA_PIN                  6
#define     IRCUTB_PIN                  7
#endif

/* IO */
#define 	W600_INTERRUPT_IO   		4
#define 	W600_RESET_IO        		3
#define		LCD_DC_IO					2
#define		LCD_RST_IO					7
#define		KEY_IO						8
#define		BUZZ_IO						9
#define		RELAY_IO					10
#define     IRCUTA_IO                   11
#define     IRCUTB_IO                   12


#if (OV5640 && OV2640) || (!OV5640 && !OV2640)
#error ov sensor only choose one
#endif

#if (BOARD_LICHEEDAN && BOARD_KD233) || (BOARD_LICHEEDAN && BOARD_GUARD) || (BOARD_GUARD && BOARD_KD233) || (!BOARD_LICHEEDAN && !BOARD_KD233 && !BOARD_GUARD && !BOARD_PADDLEPI)
#error board only choose one
#endif

#endif
