/*********************************
 *     FUNC_CFG_ACCESS (0x01)
 ********************************/
#define FUNC_CFG_ACCESS 0x01
#define FUNC_CFG_EN_MASK 0x80

/*********************************
 *  SENSOR_SYNC_TIME_FRAME (0x04)
 ********************************/
#define SENSOR_SYNC_TIME_FRAME 0x04

/*********************************
 *      FIFO_CTRL_1 (0x06)
 ********************************/
#define FIFO_CTRL_1 0x06

/*********************************
 *      FIFO_CTRL_2 (0x07)
 ********************************/
#define FIFO_CTRL_2 0x07
#define TIMER_PEDO_FIFO_EN_MASK 0x80
#define TIMER_PEDO_FIFO_DRDY_MASK 0x40
#define FTH_MASK 0x0F

/*********************************
 *      FIFO_CTRL_3 (0x08)
 ********************************/
#define FIFO_CTRL_3 0x08
#define DEC_FIFO_XL_MASK 0x07
#define DEC_FIFO_GYRO_MASK 0x38

typedef enum {
    DEC_FIFO_GYRO_OMIT=0b000,
    DEC_FIFO_GYRO_NONE=0b001,
    DEC_FIFO_GYRO_2=0b010,
    DEC_FIFO_GYRO_3=0b011,
    DEC_FIFO_GYRO_4=0b100,
    DEC_FIFO_GYRO_8=0b101,
    DEC_FIFO_GYRO_16=0b110,
    DEC_FIFO_GYRO_32=0b111,
} dec_fifo_gyro_t;

typedef enum {
    DEC_FIFO_XL_OMIT=0b000,
    DEC_FIFO_XL_NONE=0b001,
    DEC_FIFO_XL_2=0b010,
    DEC_FIFO_XL_3=0b011,
    DEC_FIFO_XL_4=0b100,
    DEC_FIFO_XL_8=0b101,
    DEC_FIFO_XL_16=0b110,
    DEC_FIFO_XL_32=0b111,
} dec_fifo_xl_t;

/*********************************
 *      FIFO_CTRL_4 (0x09)
 ********************************/
#define FIFO_CTRL_4 0x09
#define DEC_DS3_FIFO_MASK 0x07
#define DEC_DS4_FIFO_MASK 0x38
#define ONLY_HIGH_DATA 0x40

typedef enum {
    DEC_DS4_FIFO=0b000,
    DEC_DS4_FIFO_NONE=0b001,
    DEC_DS4_FIFO_2=0b010,
    DEC_DS4_FIFO_3=0b011,
    DEC_DS4_FIFO_4=0b100,
    DEC_DS4_FIFO_8=0b101,
    DEC_DS4_FIFO_16=0b110,
    DEC_DS4_FIFO_32=0b111,
} dec_ds4_fifo_t;

typedef enum {
    DEC_DS3_FIFO=0b000,
    DEC_DS3_FIFO_NONE=0b001,
    DEC_DS3_FIFO_2=0b010,
    DEC_DS3_FIFO_3=0b011,
    DEC_DS3_FIFO_4=0b100,
    DEC_DS3_FIFO_8=0b101,
    DEC_DS3_FIFO_16=0b110,
    DEC_DS3_FIFO_32=0b111,
} dec_ds3_fifo_t;

/*********************************
 *      FIFO_CTRL_5 (0x0A)
 ********************************/
#define FIFO_CTRL_5 0x0A
#define FIFO_MODE_MASK 0x07
#define ODR_FIFO_MASK 0x78

typedef enum {
    ODR_FIFO_DISABLED = 0b0000,
    ODR_FIFO_12_5_HZ = 0b0001,
    ODR_FIFO_26_HZ = 0b0010,
    ODR_FIFO_52_HZ = 0b0011,
    ODR_FIFO_104_HZ = 0b0100,
    ODR_FIFO_208_HZ = 0b0101,
    ODR_FIFO_416_HZ = 0b0110,
    ODR_FIFO_833_HZ = 0b0111,
    ODR_FIFO_1_66_kHZ = 0b1000,
    ODR_FIFO_3_33_kHZ = 0b1001,
    ODR_FIFO_6_66_kHZ = 0b1010
} odr_fifo_t;

typedef enum {
    FIFO_MODE_BYPASS = 0b000,
    FIFO_MODE_FIFO = 0b001,
    FIFO_MODE_CONT_THEN_FIFO = 0b011,
    FIFO_MODE_BYPASS_THEN_CONT = 0b100,
    FIFO_MODE_CONT = 0b110
} fifo_mode_t;

/*********************************
 *      ORIENT_CFG_G (0x0B)
 ********************************/
#define ORIENT_CFG_G 0x0B
#define SIGN_X_G_MASK 0x20
#define SIGN_Y_G_MASK 0x10
#define SIGN_Z_G_MASK 0x08
#define ORIENT_MASK 0x07

typedef enum {
    ORIENT_XYZ = 0b000,
    ORIENT_XZY = 0b001,
    ORIENT_YXZ = 0b010,
    ORIENT_YZX = 0b011,
    ORIENT_ZXY = 0b100,
    ORIENT_ZYX = 0b101 
} orient_t;

/*********************************
 *      INT1_CTRL (0x0D)
 ********************************/
#define INT1_CTRL 0x0D
#define INT1_STEP_DETECTOR_MASK 1<<7
#define INT1_SIGN_MOT_MASK 1<<6
#define INT1_FULL_FLAG_MASK 1<<5
#define INT1_FIFO_OVR_MASK 1<<4
#define INT1_FTH_MASK 1<<3
#define INT1_BOOT_MASK 1<<2
#define INT1_DRDY_G_MASK 1<<1
#define INT1_DRDY_XL 1<<0

/*********************************
 *      INT2_CTRL (0x0E)
 ********************************/
#define INT2_CTRL 0x0E
#define INT2_STEP_DELTA_MASK 1<<7
#define INT2_STEP_COUNT_OV_MASK 1<<6
#define INT2_FULL_FLAG_MASK 1<<5
#define INT2_FIFO_OVR_MASK 1<<4
#define INT2_FTH_MASK 1<<3
#define INT2_DRDY_TEMP_MASK 1<<2
#define INT2_DRDY_G_MASK 1<<1
#define INT2_DRDY_XL_MASK 1<<0

/*********************************
 *      WHO_AM_I (0x0F)
 ********************************/
#define WHO_AM_I 0x0F
#define WHO_AM_I_MASK 0x6B

/*********************************
 *      CTRL1_XL (0x10)
 ********************************/
#define CTRL1_XL 0x10
#define ODR_XL_MASK 0xF0
#define FS_XL_MASK 0x0C
#define BW_XL_MASK 0x03

typedef enum {
    ODR_XL_DISABLED = 0b0000,
    ODR_XL_12_5_HZ = 0b0001,
    ODR_XL_26_HZ = 0b0010,
    ODR_XL_52_HZ = 0b0011,
    ODR_XL_104_HZ = 0b0100,
    ODR_XL_208_HZ = 0b0101,
    ODR_XL_416_HZ = 0b0110,
    ODR_XL_833_HZ = 0b0111,
    ODR_XL_1_66_kHZ = 0b1000,
    ODR_XL_3_33_kHZ = 0b1001,
    ODR_XL_6_66_kHZ = 0b1010
} odr_xl_t;

/*********************************
 *      CTRL2_XL (0x11)
 ********************************/
#define CTRL2_XL 0x11
#define ODR_G_MASK 0xF0
#define FS_G_MASK 0x0C
#define FS_125_MASK 0x02

typedef enum {
    ODR_G_DISABLED = 0b0000,
    ODR_G_12_5_HZ = 0b0001,
    ODR_G_26_HZ = 0b0010,
    ODR_G_52_HZ = 0b0011,
    ODR_G_104_HZ = 0b0100,
    ODR_G_208_HZ = 0b0101,
    ODR_G_416_HZ = 0b0110,
    ODR_G_833_HZ = 0b0111,
    ODR_G_1_66_kHZ = 0b1000
} odr_g_t;

/*********************************
 *      CTRL3_XL (0x12)
 ********************************/
#define CTRL3_XL 0x12
#define BOOT_MASK 1<<7
#define BDU_MASK 1<<6
#define H_LACTIVE_MASK 1<<5
#define PP_OD_MASK 1<<4
#define SIM_MASK 1<<3
#define IF_INC_MASK 1<<2
#define BLE_MASK 1<<1
#define SW_RESET_MASK 1<<0

/*********************************
 *      CTRL4_XL (0x13)
 ********************************/
#define CTRL4_XL 0x13
#define XL_BW_SCAL_ODR_MASK 1<<7
#define SLEEP_G_MASK 1<<6
#define INT2_ON_INT1_MASK 1<<5
#define FIFO_TEMP_EN_MASK 1<<4
#define DRDY_MASK 1<<3
#define I2C_DISABLE_MASK 1<<2
#define STOP_ON_FTH_MASK 1<<0

/*********************************
 *      CTRL5_XL (0x14)
 ********************************/
#define CTRL5_XL 0x14
#define ROUND_MASK 0xE0
#define ST_G_MASK 0x0C
#define ST_XL_MASK 0x03

typedef enum {
    ROUNDING_NONE = 0b000,
    ROUNDING_XL = 0b001,
    ROUNDING_G = 0b010,
    ROUNDING_XL_G = 0b011,
} rounding_t;

typedef enum {
    NORMAL_MODE_G = 0b00,
    POSITIVE_SIGN_SELF_TEST_G = 0b01,
    NEGATIVE_SIGN_SELF_TEST_G = 0b11
} st_g_t;

typedef enum {
    NORMAL_MODE_XL = 0b00,
    POSITIVE_SIGN_SELF_TEST_XL = 0b01,
    NEGATIVE_SIGN_SELF_TEST_XL = 0b10
} st_xl_t;

/*********************************
 *      CTRL6_XL (0x15)
 ********************************/
#define CTRL6_XL 0x15
#define TRIG_EN_MASK 0x80
#define LVL_EN_MASK 0x40
#define LVL2_EN_MASK 0x20
#define XL_HM_MODE_MASK 0x10

/*********************************
 *      CTRL7_XL (0x16)
 ********************************/
#define CTRL7_XL 0x16
#define G_HM_MODE_MASK 0x80
#define HP_G_EN_MASK 0x40
#define HPCF_G_MASK 0x30
#define HP_G_RST_MASK 0x08
#define ROUNDING_STATUS_MASK 0x04

/*********************************
 *      CTRL8_XL (0x17)
 ********************************/
#define CTRL8_XL 0x17
#define LPF2_XL_EN_MASK 0x80
#define HPCF_XL_MASK 0x60
#define HP_SLOPE_XL_EN_MASK 0x04
#define LOW_PASS_ON_6D_MASK 0x01

/*********************************
 *      CTRL9_XL (0x18)
 ********************************/
#define CTRL9_XL 0x18
#define ZEN_XL_MASK 1<<5
#define YEN_XL_MASK 1<<4
#define XEN_XL_MASK 1<<3
#define SOFT_EN_MASK 1<<2

/*********************************
 *      CTRL10_XL (0x19)
 ********************************/
#define CTRL10_XL 0x19
#define ZEN_G_MASK 1<<5
#define YEN_G_MASK 1<<4
#define XEN_G_MASK 1<<3
#define FUNC_EN_MASK 1<<2
#define PEDO_RST_STEP_MASK 1<<1
#define SIGN_MOTION_EN_MASK 1<<0

/*********************************
 *      MASTER_CONFIG (0x1A)
 ********************************/
#define MASTER_CONFIG 0x1A
#define DRD_ON_INT1_MASK 1<<7
#define DATA_VALID_SEL_FIFO_MASK 1<<6
#define START_CONFIG_MASK 1<<4
#define PULL_UP_END_MASK 1<<3
#define PASS_THROUGH_MODE_MASK 1<<2
#define IRON_EN_MASK 1<<1
#define MASTER_ON_MASK 1<<0

/*********************************
 *      WAKE_UP_SRC (0x1B)
 ********************************/
#define WAKE_UP_SRC 0x1B
#define FF_IA_MASK 1<<5
#define SLEEP_STATE_IA_MASK 1<<4
#define WU_IA_MASK 1<<3
#define X_WU_MASK 1<<2
#define Y_WU_MASK 1<<1
#define Z_WU_MASK 1<<0

/*********************************
 *      TAP_SRC (0x1C)
 ********************************/
#define TAP_SRC 0x1C
#define TAP_IA_MASK 1<<6
#define SINGLE_TAP_MASK 1<<5
#define DOUBLE_TAP_MASK 1<<4
#define TAP_SIGN_MASK 1<<3
#define X_TAP_MASK 1<<2
#define Y_TAP_MASK 1<<1
#define Z_TAP_MASK 1<<0

/*********************************
 *      D6D_SRC (0x1D)
 ********************************/
#define D6D_SRC 0x1D
#define D6D_IA_MASK 1<<6
#define ZH_MASK 1<<5
#define ZL_MASK 1<<4
#define YH_MASK 1<<3
#define YL_MASK 1<<2
#define XH_MASK 1<<1
#define XL_MASK 1<<0

/*********************************
 *      STATUS_REG (0x1E)
 ********************************/
#define STATUS_REG 0x1E
#define TDA_MASK 1<<2
#define GDA_MASK 1<<1
#define XLDA_MASK 1<<0

#define OUT_TEMP_L 0x20
#define OUT_TEMP_H 0x21
#define OUTX_L_G 0x22
#define OUTX_H_G 0x23
#define OUTY_L_G 0x24
#define OUTY_H_G 0x25
#define OUTZ_L_G 0x26
#define OUTZ_H_G 0x27
#define OUTX_L_XL 0x28
#define OUTX_H_XL 0x29
#define OUTY_L_XL 0x2A
#define OUTY_H_XL 0x2B
#define OUTZ_L_XL 0x2C
#define OUTZ_H_XL 0x2D

/*********************************
 *      FIFO_STATUS1 (0x3A)
 ********************************/
#define FIFO_STATUS1 0x3A
#define DIFF_FIFO_L_MASK 0xFF

/*********************************
 *      FIFO_STATUS2 (0x3B)
 ********************************/
#define FIFO_STATUS2 0x3B
#define FTH_MASK 0x80
#define FIFO_OVER_RUN_MASK 0x40
#define FIFO_FULL_MASK 0x20
#define FIFO_EMPTY_MASK 0x10
#define DIFF_FIFO_H_MASK 0x0F

/*********************************
 *      FIFO_STATUS3 (0x3C)
 ********************************/
#define FIFO_STATUS3 0x3C
#define FIFO_PATTERN_L_MASK 0xFF

/*********************************
 *      FIFO_STATUS4 (0x3D)
 ********************************/
#define FIFO_STATUS4 0x3D
#define FIFO_PATTERN_H_MASK 0x03

#define FIFO_DATA_OUT_L 0x3E
#define FIFO_DATA_OUT_H 0x3F

#define TIMESTAMP0_REG 0x40
#define TIMESTAMP1_REG 0x41
#define TIMESTAMP2_REG 0x42
#define STEP_TIMESTAMP_L 0x49
#define STEP_TIMESTAMP_H 0x4A
#define STEP_COUNTER_L 0x4B
#define STEP_COUNTER_H 0x4C

/*********************************
 *      FUNC_SRC (0x53)
 ********************************/
#define FUNC_SRC 0x53
#define STEP_COUNT_DELTA_IA_MASK 1<<7
#define SIGN_MOTION_IA_MASK 1<<6
#define TILT_IA_MASK 1<<5
#define STEP_DETECTED_MASK 1<<4
#define STEP_OVERFLOW_MASK 1<<3
#define SI_END_OP_MASK 1<<1
#define SENSORHUB_END_OP_MASK 1<<0

/*********************************
 *      TAP_THS_6D (0x58)
 ********************************/
#define TAP_CFG 0x58
#define TIMER_EN_MASK 1<<7
#define PEDO_EN_MASK 1<<6
#define TILT_EN_MASK 1<<5
#define SLOPE_FDS_MASK 1<<4
#define TAP_X_EN_MASK 1<<3
#define TAP_Y_EN_MASK 1<<2
#define TAP_Z_EN_MASK 1<<1
#define LIR_MASK 1<<0

/*********************************
 *      TAP_THS_6D (0x59)
 ********************************/
#define TAP_THS_6D 0x59
#define D4D_EN_MASK 0x80
#define SIXD_THS_MASK 0x60
#define TAP_THS_MASK 0x1F

typedef enum {
    SIXD_THS_80_DEG = 0b00,
    SIXD_THS_70_DEG = 0b01,
    SIXD_THS_60_DEG = 0b10,
    SIXD_THS_50_DEG = 0b11,
} sixd_ths_t;

/*********************************
 *      INT_DUR2 (0x5A)
 ********************************/
#define INT_DUR2 0x5A
#define DUR_MASK 0xF0
#define QUIET_MASK 0xC
#define SHOCK_MASK 0x3

/*********************************
 *      WAKE_UP_THS (0x5B)
 ********************************/
#define WAKE_UP_THS 0x5B
#define SINGLE_DOUBLE_TAP_MASK 0x80
#define INACTIVITY_MASK 0x40
#define WK_THS_MASK 0x3F

/*********************************
 *      WAKE_UP_DUR (0x5C)
 ********************************/
#define WAKE_UP_DUR 0x5C
#define FF_DUR_H_MASK 0x80
#define WAKE_DUR_MASK 0x60
#define TIMER_HR_MASK 0x10
#define SLEEP_DUR_MASK 0x0F

typedef enum{
    TIMER_RES_6_4_MS = 0,
    TIMER_RES_25_US = 1
} timer_hr_t;

/*********************************
 *      FREE_FALL (0x5D)
 ********************************/
#define FREE_FALL 0x5D
#define FF_DUR_MASK_L 0xF8
#define FF_THS_MASK 0x07

typedef enum {
    FF_THS_156_MG = 0b000,
    FF_THS_219_MG = 0b001,
    FF_THS_250_MG = 0b010,
    FF_THS_312_MG = 0b011,
    FF_THS_344_MG = 0b100,
    FF_THS_406_MG = 0b101,
    FF_THS_469_MG = 0b110,
    FF_THS_500_MG = 0b111,
} ff_ths_t;

/*********************************
 *      MD1_CFG (0x5E)
 ********************************/
#define MD1_CFG 0x5E
#define INT1_INACT_STATE_MASK 1<<7
#define INT1_SINGLE_TAP 1<<6
#define INT1_WU 1<<5
#define INT1_FF 1<<4
#define INT1_DOUBLE_TAP 1<<3
#define INT1_6D 1<<2
#define INT1_TILT 1<<1
#define INT1_TIMER 1<<0

/*********************************
 *      MD2_CFG (0x5F)
 ********************************/
#define MD2_CFG 0x5F
#define INT2_INACT_STATE_MASK 1<<7
#define INT2_SINGLE_TAP 1<<6
#define INT2_WU 1<<5
#define INT2_FF 1<<4
#define INT2_DOUBLE_TAP 1<<3
#define INT2_6D 1<<2
#define INT2_TILT 1<<1
#define INT2_IRON 1<<0

