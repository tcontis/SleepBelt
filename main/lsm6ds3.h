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

#define FIFO_CTRL_4 0x09
#define FIFO_CTRL_5 0x0A
#define ORIENT_CFG_G 0x0B
#define INT1_CTRL 0x0D
#define INT2_CTRL 0x0E
#define WHO_AM_I 0x0F

#define CTRL1_XL 0x10
#define CTRL2_XL 0x11
#define CTRL3_XL 0x12
#define CTRL4_XL 0x13
#define CTRL5_XL 0x14
#define CTRL6_XL 0x15
#define CTRL7_XL 0x16
#define CTRL8_XL 0x17
#define CTRL9_XL 0x18
#define CTRL10_XL 0x19
#define MASTER_CONFIG 0x1A
#define WAKE_UP_SRC 0x1B
#define TAP_SRC 0x1C
#define D6D_SRC 0x1D
#define STATUS_REG 0x1E

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

#define FIFO_STATUS1 0x3A
#define FIFO_STATUS2 0x3B
#define FIFO_STATUS3 0x3C
#define FIFO_STATUS4 0x3D
#define FIFO_DATA_OUT_L 0x3E
#define FIFO_DATA_OUT_H 0x3F

#define TIMESTAMP0_REG 0x40
#define TIMESTAMP0_REG 0x41
#define TIMESTAMP0_REG 0x42
#define STEP_TIMESTAMP_L 0x49
#define STEP_TIMESTAMP_H 0x4A
#define STEP_COUNTER_L 0x4B
#define STEP_COUNTER_H 0x4C

#define FUNC_SRC 0x53
#define TAP_CFG 0x58
#define TAP_THS_6D 0x59
#define INT_DUR2 0x5A
#define WAKE_UP_THS 0x5B
#define WAKE_UP_DUR 0x5C
#define FREE_FALL 0x5D
#define MD1_CFG 0x5E
#define MD2_CFG 0x5F

