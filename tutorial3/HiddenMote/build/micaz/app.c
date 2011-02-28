#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/bin/../lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
}  ;
#line 14
struct __nesc_attr_one_nok {
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
}  ;
# 121 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;





static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 257
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;
#line 276
static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 294
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 385
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 116 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memset(void *arg_0x2adc4c8567f0, int arg_0x2adc4c856a58, size_t arg_0x2adc4c856d00);
# 71 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x2adc4c877968, const void *arg_0x2adc4c877c40);
# 23 "/opt/tinyos-2.1.0/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 24
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 35
struct __nesc_attr_atleastonce {
};
#line 36
struct __nesc_attr_exactlyonce {
};
# 40 "/opt/tinyos-2.1.0/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 57 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 52
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 210 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.1.0/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 82 "/opt/tinyos-2.1.0/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 102
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 112
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
# 34 "/opt/tinyos-2.1.0/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4260 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4261 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 43 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4262 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4263 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4264 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4265 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4266 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4267 {

  uint8_t flat;
  struct __nesc_unnamed4268 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 121
#line 111
typedef union __nesc_unnamed4269 {

  uint8_t flat;
  struct __nesc_unnamed4270 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 137
#line 124
typedef union __nesc_unnamed4271 {

  uint8_t flat;
  struct __nesc_unnamed4272 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 154
#line 141
typedef union __nesc_unnamed4273 {

  uint8_t flat;
  struct __nesc_unnamed4274 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 169
#line 158
typedef union __nesc_unnamed4275 {

  uint8_t flat;
  struct __nesc_unnamed4276 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4277 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4280 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 232
#line 222
typedef union __nesc_unnamed4281 {

  uint8_t flat;
  struct __nesc_unnamed4282 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 250
#line 241
typedef union __nesc_unnamed4283 {

  uint8_t flat;
  struct __nesc_unnamed4284 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 300
#line 288
typedef union __nesc_unnamed4285 {

  uint8_t flat;
  struct __nesc_unnamed4286 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 315
#line 303
typedef union __nesc_unnamed4287 {

  uint8_t flat;
  struct __nesc_unnamed4288 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/opt/tinyos-2.1.0/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4289 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4290 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4291 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4292 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4293 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4294 {
  PLATFORM_MHZ = 8
};
# 55 "/opt/tinyos-2.1.0/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4295 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};

enum __nesc_unnamed4296 {
  PLATFORM_BAUDRATE = 57600L
};
# 9 "WSNDemo.h"
enum __nesc_unnamed4297 {
  AM_RSSIMSG = 10
};



#line 13
typedef struct RssiMsg {
  uint16_t rssi;
} RssiMsg;

enum __nesc_unnamed4298 {
  SEND_INTERVAL_MS = 250, 
  LOG2SAMPLES = 7
};
# 39 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 66
#line 49
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;



  nxle_uint8_t network;



  nxle_uint8_t type;
} __attribute__((packed)) 

cc2420_header_t;





#line 71
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 97
#line 81
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 






cc2420_metadata_t;





#line 100
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 134
enum __nesc_unnamed4299 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum __nesc_unnamed4300 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "/opt/tinyos-2.1.0/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4301 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4302 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 72 "/opt/tinyos-2.1.0/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4303 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4304 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4305 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 125
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 49 "/opt/tinyos-2.1.0/tos/platforms/micaz/platform_message.h"
#line 46
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 51
typedef union message_footer {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 55
typedef union message_metadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/opt/tinyos-2.1.0/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 38 "/opt/tinyos-2.1.0/tos/chips/cc2420/IEEE802154.h"
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
# 32 "/opt/tinyos-2.1.0/tos/types/Leds.h"
enum __nesc_unnamed4306 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 32 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4307 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 49
#line 40
typedef struct __nesc_unnamed4308 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 50
typedef union __nesc_unnamed4309 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 58
typedef struct __nesc_unnamed4310 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 65
typedef union __nesc_unnamed4311 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 33 "/opt/tinyos-2.1.0/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 28 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420TimeSyncMessage.h"
typedef nx_uint32_t timesync_radio_t;
typedef T32khz CC2420ControlP$StartupTimer$precision_tag;
typedef uint32_t CC2420ControlP$StartupTimer$size_type;
typedef uint16_t CC2420ControlP$ReadRssi$val_t;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef uint8_t HplAtm128Timer0AsyncP$Timer$timer_size;
typedef uint16_t HplAtm128Timer1P$CompareA$size_type;
typedef uint16_t HplAtm128Timer1P$Capture$size_type;
typedef uint16_t HplAtm128Timer1P$CompareB$size_type;
typedef uint16_t HplAtm128Timer1P$CompareC$size_type;
typedef uint16_t HplAtm128Timer1P$Timer$timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC$0$timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC$0$timer_size /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$frequency_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16*/AlarmOne16C$0$__nesc_unnamed4312 {
  AlarmOne16C$0$COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC$0$frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0$frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC$0$to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC$0$from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type;
typedef counter_one_overflow_t /*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$from_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$to_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type;
typedef uint16_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC$0$__nesc_unnamed4313 {
  CC2420SpiC$0$CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$__nesc_unnamed4314 {
  CC2420SpiC$1$CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC$2$__nesc_unnamed4315 {
  CC2420SpiC$2$CLIENT_ID = 2U
};
typedef T32khz CC2420TransmitP$PacketTimeStamp$precision_tag;
typedef uint32_t CC2420TransmitP$PacketTimeStamp$size_type;
typedef T32khz CC2420TransmitP$BackoffTimer$precision_tag;
typedef uint32_t CC2420TransmitP$BackoffTimer$size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC$3$__nesc_unnamed4316 {
  CC2420SpiC$3$CLIENT_ID = 3U
};
typedef T32khz CC2420ReceiveP$PacketTimeStamp$precision_tag;
typedef uint32_t CC2420ReceiveP$PacketTimeStamp$size_type;
typedef T32khz CC2420PacketP$PacketTimeStamp32khz$precision_tag;
typedef uint32_t CC2420PacketP$PacketTimeStamp32khz$size_type;
typedef T32khz CC2420PacketP$LocalTime32khz$precision_tag;
typedef TMilli CC2420PacketP$LocalTimeMilli$precision_tag;
typedef TMilli CC2420PacketP$PacketTimeStampMilli$precision_tag;
typedef uint32_t CC2420PacketP$PacketTimeStampMilli$size_type;
typedef T32khz /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
enum HilTimerMilliC$__nesc_unnamed4317 {
  HilTimerMilliC$TIMER_COUNT = 2U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC$4$__nesc_unnamed4318 {
  CC2420SpiC$4$CLIENT_ID = 4U
};
typedef uint16_t RandomMlcgC$SeedInit$parameter;
enum AMQueueP$__nesc_unnamed4319 {
  AMQueueP$NUM_CLIENTS = 1U
};
typedef TMilli HiddenMoteC$SendTimer$precision_tag;
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static void CC2420ActiveMessageP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 53 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error);
# 95 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP$RadioBackoff$default$requestCca(
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2adc4ca79780, 
# 95 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2adc4ca79780, 
# 81 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2adc4ca79780, 
# 88 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/opt/tinyos-2.1.0/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP$SendNotifier$default$aboutToSend(
# 44 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2adc4ca7ac50, 
# 59 "/opt/tinyos-2.1.0/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 95 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP$SubBackoff$requestCca(message_t * msg);
#line 81
static void CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(message_t * msg);






static void CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(message_t * msg);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
static uint8_t CC2420ActiveMessageP$Packet$payloadLength(
#line 63
message_t * msg);
#line 83
static void CC2420ActiveMessageP$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static error_t CC2420ActiveMessageP$AMSend$send(
# 39 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2adc4ca6e060, 
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$Snoop$default$receive(
# 41 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2adc4ca7dce8, 
# 60 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 67
static 
#line 63
message_t * 



CC2420ActiveMessageP$Receive$default$receive(
# 40 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2adc4ca7d1a0, 
# 60 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
static am_addr_t CC2420ActiveMessageP$AMPacket$address(void );









static am_addr_t CC2420ActiveMessageP$AMPacket$destination(
#line 63
message_t * amsg);
#line 92
static void CC2420ActiveMessageP$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t CC2420ActiveMessageP$AMPacket$type(
#line 132
message_t * amsg);
#line 151
static void CC2420ActiveMessageP$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
#line 125
static bool CC2420ActiveMessageP$AMPacket$isForMe(
#line 122
message_t * amsg);
# 83 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
static error_t CC2420CsmaP$SplitControl$start(void );
# 81 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t * msg);






static void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t * msg);
# 73 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420CsmaP$CC2420Transmit$sendDone(message_t * p_msg, error_t error);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static error_t CC2420CsmaP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
# 76 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420CsmaP$CC2420Power$startOscillatorDone(void );
#line 56
static void CC2420CsmaP$CC2420Power$startVRegDone(void );
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void CC2420CsmaP$Resource$granted(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void CC2420CsmaP$sendDone_task$runTask(void );
#line 64
static void CC2420CsmaP$stopDone_task$runTask(void );
#line 64
static void CC2420CsmaP$startDone_task$runTask(void );
# 86 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void );
#line 110
static bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void );
#line 105
static bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void );
#line 64
static uint16_t CC2420ControlP$CC2420Config$getShortAddr(void );
#line 52
static error_t CC2420ControlP$CC2420Config$sync(void );
#line 70
static uint16_t CC2420ControlP$CC2420Config$getPanAddr(void );
# 67 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static void CC2420ControlP$StartupTimer$fired(void );
# 63 "/opt/tinyos-2.1.0/tos/interfaces/Read.nc"
static void CC2420ControlP$ReadRssi$default$readDone(error_t result, CC2420ControlP$ReadRssi$val_t val);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP$syncDone$runTask(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t CC2420ControlP$Init$init(void );
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void CC2420ControlP$SpiResource$granted(void );
#line 92
static void CC2420ControlP$SyncResource$granted(void );
# 71 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420ControlP$CC2420Power$startOscillator(void );
#line 90
static error_t CC2420ControlP$CC2420Power$rxOn(void );
#line 51
static error_t CC2420ControlP$CC2420Power$startVReg(void );
#line 63
static error_t CC2420ControlP$CC2420Power$stopVReg(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP$sync$runTask(void );
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t CC2420ControlP$Resource$release(void );
#line 78
static error_t CC2420ControlP$Resource$request(void );
# 57 "/opt/tinyos-2.1.0/tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP$InterruptCCA$fired(void );
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void CC2420ControlP$RssiResource$granted(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 51
static error_t MotePlatformP$PlatformInit$init(void );
# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );



static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void );
#line 35
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void );
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void );
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2adc4c97d960);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2adc4c97d960);
# 46 "/opt/tinyos-2.1.0/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP$Scheduler$init(void );
#line 61
static void SchedulerBasicP$Scheduler$taskLoop(void );
#line 54
static bool SchedulerBasicP$Scheduler$runNextTask(void );
# 59 "/opt/tinyos-2.1.0/tos/interfaces/McuSleep.nc"
static void McuSleepC$McuSleep$sleep(void );
# 44 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerState.nc"
static void McuSleepC$McuPowerState$update(void );
# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void );
#line 37
static void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t control);
# 54 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void );
# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );
# 39 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type t);










static void HplAtm128Timer0AsyncP$Compare$start(void );
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer0AsyncP$Timer$timer_size HplAtm128Timer0AsyncP$Timer$get(void );
# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 37
static Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void );
# 53 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P$CompareA$reset(void );
#line 45
static void HplAtm128Timer1P$CompareA$set(HplAtm128Timer1P$CompareA$size_type t);










static void HplAtm128Timer1P$CompareA$start(void );


static void HplAtm128Timer1P$CompareA$stop(void );
# 79 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P$Capture$setEdge(bool up);
#line 55
static void HplAtm128Timer1P$Capture$reset(void );


static void HplAtm128Timer1P$Capture$start(void );


static void HplAtm128Timer1P$Capture$stop(void );
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P$CompareB$default$fired(void );
#line 49
static void HplAtm128Timer1P$CompareC$default$fired(void );
# 78 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm128Timer1P$Timer$test(void );
#line 52
static HplAtm128Timer1P$Timer$timer_size HplAtm128Timer1P$Timer$get(void );
#line 95
static void HplAtm128Timer1P$Timer$setScale(uint8_t scale);
#line 58
static void HplAtm128Timer1P$Timer$set(HplAtm128Timer1P$Timer$timer_size t);










static void HplAtm128Timer1P$Timer$start(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void );
# 92 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$size_type dt);
#line 62
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop(void );
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void );
# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$size_type /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void );
# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void );
#line 53
static /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void );
# 98 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void );
#line 92
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type dt);
#line 55
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type dt);






static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void );
# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t NoInitC$Init$init(void );
# 43 "/opt/tinyos-2.1.0/tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void );
#line 55
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable(void );
#line 42
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void );
# 51 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(/*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$size_type t);
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void );
# 50 "/opt/tinyos-2.1.0/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable(void );
#line 43
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void );
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void );
# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void );
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void );
# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void );
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired(void );
# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void );
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void );
# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void );
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void );
# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void );
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void );
# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void );
# 45 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void );
#line 40
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void );
#line 59
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool low_to_high);
#line 35
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void );
# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void );
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void );
# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void );
# 50 "/opt/tinyos-2.1.0/tos/interfaces/GpioInterrupt.nc"
static error_t HplCC2420InterruptsP$CCA$disable(void );
#line 42
static error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void HplCC2420InterruptsP$CCATask$runTask(void );
# 71 "/opt/tinyos-2.1.0/tos/interfaces/SpiPacket.nc"
static void CC2420SpiP$SpiPacket$sendDone(
#line 64
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP$Fifo$continueRead(
# 46 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d11f328, 
# 62 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP$Fifo$default$writeDone(
# 46 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d11f328, 
# 91 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP$Fifo$write(
# 46 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d11f328, 
# 82 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP$Fifo$beginRead(
# 46 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d11f328, 
# 51 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP$Fifo$default$readDone(
# 46 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d11f328, 
# 71 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 31 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP$ChipSpiResource$abortRelease(void );







static error_t CC2420SpiP$ChipSpiResource$attemptRelease(void );
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void CC2420SpiP$SpiResource$granted(void );
# 63 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP$Ram$write(
# 47 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x2adc4d11e4d8, 
# 63 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 47 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP$Reg$read(
# 48 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d11d220, 
# 47 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP$Reg$write(
# 48 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d11d220, 
# 55 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$Resource$release(
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d121158);
# 87 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$Resource$immediateRequest(
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d121158);
# 78 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$Resource$request(
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d121158);
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void CC2420SpiP$Resource$default$granted(
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d121158);
# 118 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static bool CC2420SpiP$Resource$isOwner(
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d121158);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void CC2420SpiP$grant$runTask(void );
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP$Strobe$strobe(
# 49 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d11c020);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t StateImplP$Init$init(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
static void StateImplP$State$toIdle(
# 67 "/opt/tinyos-2.1.0/tos/system/StateImplP.nc"
uint8_t arg_0x2adc4d187d50);
# 66 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
static bool StateImplP$State$isState(
# 67 "/opt/tinyos-2.1.0/tos/system/StateImplP.nc"
uint8_t arg_0x2adc4d187d50, 
# 66 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP$State$isIdle(
# 67 "/opt/tinyos-2.1.0/tos/system/StateImplP.nc"
uint8_t arg_0x2adc4d187d50);
# 45 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
static error_t StateImplP$State$requestState(
# 67 "/opt/tinyos-2.1.0/tos/system/StateImplP.nc"
uint8_t arg_0x2adc4d187d50, 
# 45 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
uint8_t reqState);





static void StateImplP$State$forceState(
# 67 "/opt/tinyos-2.1.0/tos/system/StateImplP.nc"
uint8_t arg_0x2adc4d187d50, 
# 51 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
uint8_t reqState);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void Atm128SpiP$zeroTask$runTask(void );
# 59 "/opt/tinyos-2.1.0/tos/interfaces/SpiPacket.nc"
static error_t Atm128SpiP$SpiPacket$send(
#line 48
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void Atm128SpiP$ResourceArbiter$granted(
# 84 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2adc4d1cc6e0);
# 34 "/opt/tinyos-2.1.0/tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP$SpiByte$write(uint8_t tx);
# 92 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP$Spi$dataReady(uint8_t data);
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$Resource$release(
# 80 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2adc4d1ba020);
# 87 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$Resource$immediateRequest(
# 80 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2adc4d1ba020);
# 78 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$Resource$request(
# 80 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2adc4d1ba020);
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void Atm128SpiP$Resource$default$granted(
# 80 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2adc4d1ba020);
# 118 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static bool Atm128SpiP$Resource$isOwner(
# 80 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2adc4d1ba020);
# 72 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP$SPI$sleep(void );
#line 66
static void HplAtm128SpiP$SPI$initMaster(void );
#line 105
static void HplAtm128SpiP$SPI$setMasterBit(bool isMaster);
#line 96
static void HplAtm128SpiP$SPI$enableInterrupt(bool enabled);
#line 80
static uint8_t HplAtm128SpiP$SPI$read(void );
#line 125
static void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool on);
#line 114
static void HplAtm128SpiP$SPI$setClock(uint8_t speed);
#line 108
static void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle);
#line 86
static void HplAtm128SpiP$SPI$write(uint8_t data);
#line 99
static void HplAtm128SpiP$SPI$enableSpi(bool busOn);
#line 111
static void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void );
# 69 "/opt/tinyos-2.1.0/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void );
# 43 "/opt/tinyos-2.1.0/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(
# 52 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2adc4d2ae408);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(
# 52 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2adc4d2ae408);
# 55 "/opt/tinyos-2.1.0/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(
# 56 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2adc4d2ad920);
# 49 "/opt/tinyos-2.1.0/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(
# 56 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2adc4d2ad920);
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(
# 51 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2adc4d2af258);
# 87 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(
# 51 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2adc4d2af258);
# 78 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(
# 51 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2adc4d2af258);
# 118 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(
# 51 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2adc4d2af258);
# 80 "/opt/tinyos-2.1.0/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void );
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t HplCC2420SpiP$Resource$release(void );
#line 87
static error_t HplCC2420SpiP$Resource$immediateRequest(void );
#line 78
static error_t HplCC2420SpiP$Resource$request(void );
#line 118
static bool HplCC2420SpiP$Resource$isOwner(void );
#line 92
static void HplCC2420SpiP$SubResource$granted(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t LedsP$Init$init(void );
# 72 "/opt/tinyos-2.1.0/tos/interfaces/Leds.nc"
static void LedsP$Leds$led1Toggle(void );
# 44 "/opt/tinyos-2.1.0/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 50 "/opt/tinyos-2.1.0/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );




static am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void );
# 66 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t backoffTime);
# 50 "/opt/tinyos-2.1.0/tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP$CaptureSFD$captured(uint16_t time);
# 67 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP$BackoffTimer$fired(void );
# 63 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t * message);
# 51 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420TransmitP$Send$send(message_t * p_msg, bool useCca);
# 24 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP$ChipSpiResource$releasing(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t CC2420TransmitP$Init$init(void );
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void CC2420TransmitP$SpiResource$granted(void );
# 74 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
static error_t CC2420TransmitP$StdControl$start(void );









static error_t CC2420TransmitP$StdControl$stop(void );
# 91 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP$TXFIFO$writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP$TXFIFO$readDone(uint8_t * data, uint8_t length, error_t error);
# 53 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ReceiveP$CC2420Config$syncDone(error_t error);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void CC2420ReceiveP$receiveDone_task$runTask(void );
# 55 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP$CC2420Receive$sfd_dropped(void );
#line 49
static void CC2420ReceiveP$CC2420Receive$sfd(uint32_t time);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t CC2420ReceiveP$Init$init(void );
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void CC2420ReceiveP$SpiResource$granted(void );
# 91 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP$RXFIFO$writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP$RXFIFO$readDone(uint8_t * data, uint8_t length, error_t error);
# 57 "/opt/tinyos-2.1.0/tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP$InterruptFIFOP$fired(void );
# 74 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
static error_t CC2420ReceiveP$StdControl$start(void );









static error_t CC2420ReceiveP$StdControl$stop(void );
# 59 "/opt/tinyos-2.1.0/tos/interfaces/PacketTimeStamp.nc"
static void CC2420PacketP$PacketTimeStamp32khz$clear(
#line 55
message_t * msg);
#line 67
static void CC2420PacketP$PacketTimeStamp32khz$set(
#line 62
message_t * msg, 




CC2420PacketP$PacketTimeStamp32khz$size_type value);
# 42 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420PacketP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420PacketP$CC2420PacketBody$getMetadata(message_t * msg);
# 47 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420PacketP$PacketTimeSyncOffset$get(
#line 42
message_t * msg);
#line 39
static bool CC2420PacketP$PacketTimeSyncOffset$isSet(
#line 35
message_t * msg);
# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 98 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );
#line 92
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type dt);
#line 105
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );
# 67 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
# 125 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
#line 118
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 72 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );
#line 72
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2adc4d647778);
# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2adc4d647778, 
# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
uint32_t dt);
# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void );
# 41 "/opt/tinyos-2.1.0/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC$Random$rand16(void );
#line 35
static uint32_t RandomMlcgC$Random$rand32(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t RandomMlcgC$Init$init(void );
# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static void UniqueSendP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
#line 64
static error_t UniqueSendP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t UniqueSendP$Init$init(void );
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t UniqueReceiveP$Init$init(void );
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$DuplicateReceive$default$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$NonTinyosReceive$default$receive(
# 48 "/opt/tinyos-2.1.0/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x2adc4d74c728, 
# 60 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static error_t /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static void /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 40 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2adc4d7da020, 
# 92 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 38 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2adc4d7dce18, 
# 56 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 38 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2adc4d7dce18, 
# 85 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );
#line 64
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
# 72 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static void HiddenMoteC$SendTimer$fired(void );
# 49 "/opt/tinyos-2.1.0/tos/interfaces/Boot.nc"
static void HiddenMoteC$Boot$booted(void );
# 92 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
static void HiddenMoteC$RadioControl$startDone(error_t error);
#line 117
static void HiddenMoteC$RadioControl$stopDone(error_t error);
# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static void HiddenMoteC$RssiMsgSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static error_t CC2420ActiveMessageP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
# 70 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Config.nc"
static uint16_t CC2420ActiveMessageP$CC2420Config$getPanAddr(void );
# 95 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP$RadioBackoff$requestCca(
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2adc4ca79780, 
# 95 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP$RadioBackoff$requestInitialBackoff(
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2adc4ca79780, 
# 81 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP$RadioBackoff$requestCongestionBackoff(
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2adc4ca79780, 
# 88 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/opt/tinyos-2.1.0/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP$SendNotifier$aboutToSend(
# 44 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2adc4ca7ac50, 
# 59 "/opt/tinyos-2.1.0/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static void CC2420ActiveMessageP$AMSend$sendDone(
# 39 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2adc4ca6e060, 
# 92 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$Snoop$receive(
# 41 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2adc4ca7dce8, 
# 60 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 50 "/opt/tinyos-2.1.0/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ActiveMessageP$ActiveMessageAddress$amAddress(void );
# 42 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ActiveMessageP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420ActiveMessageP$CC2420PacketBody$getMetadata(message_t * msg);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$Receive$receive(
# 40 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x2adc4ca7d1a0, 
# 60 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 61 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 88
static inline am_addr_t CC2420ActiveMessageP$AMPacket$address(void );



static am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg);









static inline void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr);









static inline bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg);




static inline am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg);




static inline void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type);
#line 147
static inline uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg);



static inline void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len);
#line 165
static inline void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result);





static inline message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 191
static inline void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error);





static inline void CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(message_t *msg);




static inline void CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(message_t *msg);



static inline void CC2420ActiveMessageP$SubBackoff$requestCca(message_t *msg);
#line 237
static inline message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);






static inline void CC2420ActiveMessageP$SendNotifier$default$aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg);

static inline void CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP$RadioBackoff$default$requestCca(am_id_t id, 
message_t *msg);
# 92 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
static void CC2420CsmaP$SplitControl$startDone(error_t error);
#line 117
static void CC2420CsmaP$SplitControl$stopDone(error_t error);
# 95 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP$RadioBackoff$requestCca(message_t * msg);
#line 81
static void CC2420CsmaP$RadioBackoff$requestInitialBackoff(message_t * msg);






static void CC2420CsmaP$RadioBackoff$requestCongestionBackoff(message_t * msg);
#line 66
static void CC2420CsmaP$SubBackoff$setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420CsmaP$SubBackoff$setInitialBackoff(uint16_t backoffTime);
# 51 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420CsmaP$CC2420Transmit$send(message_t * p_msg, bool useCca);
# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static void CC2420CsmaP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 41 "/opt/tinyos-2.1.0/tos/interfaces/Random.nc"
static uint16_t CC2420CsmaP$Random$rand16(void );
# 74 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
static error_t CC2420CsmaP$SubControl$start(void );









static error_t CC2420CsmaP$SubControl$stop(void );
# 42 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420CsmaP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420CsmaP$CC2420PacketBody$getMetadata(message_t * msg);
# 71 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420CsmaP$CC2420Power$startOscillator(void );
#line 90
static error_t CC2420CsmaP$CC2420Power$rxOn(void );
#line 51
static error_t CC2420CsmaP$CC2420Power$startVReg(void );
#line 63
static error_t CC2420CsmaP$CC2420Power$stopVReg(void );
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t CC2420CsmaP$Resource$release(void );
#line 78
static error_t CC2420CsmaP$Resource$request(void );
# 66 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
static bool CC2420CsmaP$SplitControlState$isState(uint8_t myState);
#line 45
static error_t CC2420CsmaP$SplitControlState$requestState(uint8_t reqState);





static void CC2420CsmaP$SplitControlState$forceState(uint8_t reqState);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t CC2420CsmaP$sendDone_task$postTask(void );
#line 56
static error_t CC2420CsmaP$stopDone_task$postTask(void );
#line 56
static error_t CC2420CsmaP$startDone_task$postTask(void );
# 74 "/opt/tinyos-2.1.0/tos/chips/cc2420/csma/CC2420CsmaP.nc"
enum CC2420CsmaP$__nesc_unnamed4320 {
#line 74
  CC2420CsmaP$startDone_task = 0U
};
#line 74
typedef int CC2420CsmaP$__nesc_sillytask_startDone_task[CC2420CsmaP$startDone_task];

enum CC2420CsmaP$__nesc_unnamed4321 {
#line 76
  CC2420CsmaP$stopDone_task = 1U
};
#line 76
typedef int CC2420CsmaP$__nesc_sillytask_stopDone_task[CC2420CsmaP$stopDone_task];
enum CC2420CsmaP$__nesc_unnamed4322 {
#line 77
  CC2420CsmaP$sendDone_task = 2U
};
#line 77
typedef int CC2420CsmaP$__nesc_sillytask_sendDone_task[CC2420CsmaP$sendDone_task];
#line 58
enum CC2420CsmaP$__nesc_unnamed4323 {
  CC2420CsmaP$S_STOPPED, 
  CC2420CsmaP$S_STARTING, 
  CC2420CsmaP$S_STARTED, 
  CC2420CsmaP$S_STOPPING, 
  CC2420CsmaP$S_TRANSMITTING
};

message_t * CC2420CsmaP$m_msg;

error_t CC2420CsmaP$sendErr = SUCCESS;


bool CC2420CsmaP$ccaOn;







static inline void CC2420CsmaP$shutdown(void );


static inline error_t CC2420CsmaP$SplitControl$start(void );
#line 123
static inline error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len);
#line 199
static inline void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err);




static inline void CC2420CsmaP$CC2420Power$startVRegDone(void );



static inline void CC2420CsmaP$Resource$granted(void );



static inline void CC2420CsmaP$CC2420Power$startOscillatorDone(void );




static inline void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *msg);






static inline void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *msg);
#line 238
static inline void CC2420CsmaP$sendDone_task$runTask(void );
#line 251
static inline void CC2420CsmaP$startDone_task$runTask(void );







static inline void CC2420CsmaP$stopDone_task$runTask(void );









static inline void CC2420CsmaP$shutdown(void );
# 53 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ControlP$CC2420Config$syncDone(error_t error);
# 55 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$RXCTRL1$write(uint16_t data);
# 55 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type dt);
# 55 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t data);
# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP$RSTN$makeOutput(void );
#line 29
static void CC2420ControlP$RSTN$set(void );
static void CC2420ControlP$RSTN$clr(void );
# 63 "/opt/tinyos-2.1.0/tos/interfaces/Read.nc"
static void CC2420ControlP$ReadRssi$readDone(error_t result, CC2420ControlP$ReadRssi$val_t val);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t CC2420ControlP$syncDone$postTask(void );
# 47 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$RSSI$read(uint16_t *data);







static cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t data);
# 50 "/opt/tinyos-2.1.0/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ControlP$ActiveMessageAddress$amAddress(void );




static am_group_t CC2420ControlP$ActiveMessageAddress$amGroup(void );
# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP$CSN$makeOutput(void );
#line 29
static void CC2420ControlP$CSN$set(void );
static void CC2420ControlP$CSN$clr(void );




static void CC2420ControlP$VREN$makeOutput(void );
#line 29
static void CC2420ControlP$VREN$set(void );
static void CC2420ControlP$VREN$clr(void );
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP$SXOSCON$strobe(void );
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t CC2420ControlP$SpiResource$release(void );
#line 78
static error_t CC2420ControlP$SpiResource$request(void );
#line 110
static error_t CC2420ControlP$SyncResource$release(void );
#line 78
static error_t CC2420ControlP$SyncResource$request(void );
# 76 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420ControlP$CC2420Power$startOscillatorDone(void );
#line 56
static void CC2420ControlP$CC2420Power$startVRegDone(void );
# 55 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t data);
#line 55
static cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t data);
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP$SRXON$strobe(void );
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void CC2420ControlP$Resource$granted(void );
# 63 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP$PANID$write(uint8_t offset, uint8_t * data, uint8_t length);
# 50 "/opt/tinyos-2.1.0/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP$InterruptCCA$disable(void );
#line 42
static error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void );
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t CC2420ControlP$RssiResource$release(void );
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP$SRFOFF$strobe(void );
# 117 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
enum CC2420ControlP$__nesc_unnamed4324 {
#line 117
  CC2420ControlP$sync = 3U
};
#line 117
typedef int CC2420ControlP$__nesc_sillytask_sync[CC2420ControlP$sync];
enum CC2420ControlP$__nesc_unnamed4325 {
#line 118
  CC2420ControlP$syncDone = 4U
};
#line 118
typedef int CC2420ControlP$__nesc_sillytask_syncDone[CC2420ControlP$syncDone];
#line 85
#line 79
typedef enum CC2420ControlP$__nesc_unnamed4326 {
  CC2420ControlP$S_VREG_STOPPED, 
  CC2420ControlP$S_VREG_STARTING, 
  CC2420ControlP$S_VREG_STARTED, 
  CC2420ControlP$S_XOSC_STARTING, 
  CC2420ControlP$S_XOSC_STARTED
} CC2420ControlP$cc2420_control_state_t;

uint8_t CC2420ControlP$m_channel;

uint8_t CC2420ControlP$m_tx_power;

uint16_t CC2420ControlP$m_pan;

uint16_t CC2420ControlP$m_short_addr;

bool CC2420ControlP$m_sync_busy;


bool CC2420ControlP$autoAckEnabled;


bool CC2420ControlP$hwAutoAckDefault;


bool CC2420ControlP$addressRecognition;


bool CC2420ControlP$hwAddressRecognition;

CC2420ControlP$cc2420_control_state_t CC2420ControlP$m_state = CC2420ControlP$S_VREG_STOPPED;



static void CC2420ControlP$writeFsctrl(void );
static void CC2420ControlP$writeMdmctrl0(void );
static void CC2420ControlP$writeId(void );





static inline error_t CC2420ControlP$Init$init(void );
#line 171
static inline error_t CC2420ControlP$Resource$request(void );







static inline error_t CC2420ControlP$Resource$release(void );







static inline error_t CC2420ControlP$CC2420Power$startVReg(void );
#line 199
static inline error_t CC2420ControlP$CC2420Power$stopVReg(void );







static inline error_t CC2420ControlP$CC2420Power$startOscillator(void );
#line 249
static inline error_t CC2420ControlP$CC2420Power$rxOn(void );
#line 279
static uint16_t CC2420ControlP$CC2420Config$getShortAddr(void );







static inline uint16_t CC2420ControlP$CC2420Config$getPanAddr(void );
#line 300
static inline error_t CC2420ControlP$CC2420Config$sync(void );
#line 332
static inline bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void );
#line 359
static inline bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void );






static inline bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void );









static inline void CC2420ControlP$SyncResource$granted(void );
#line 390
static inline void CC2420ControlP$SpiResource$granted(void );




static inline void CC2420ControlP$RssiResource$granted(void );
#line 408
static inline void CC2420ControlP$StartupTimer$fired(void );









static inline void CC2420ControlP$InterruptCCA$fired(void );
#line 442
static inline void CC2420ControlP$sync$runTask(void );



static inline void CC2420ControlP$syncDone$runTask(void );









static void CC2420ControlP$writeFsctrl(void );
#line 473
static void CC2420ControlP$writeMdmctrl0(void );
#line 492
static void CC2420ControlP$writeId(void );
#line 509
static inline void CC2420ControlP$ReadRssi$default$readDone(error_t error, uint16_t data);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t PlatformP$MoteInit$init(void );
#line 51
static error_t PlatformP$MeasureClock$init(void );
# 42 "/opt/tinyos-2.1.0/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void );






static inline error_t PlatformP$Init$init(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t MotePlatformP$SubInit$init(void );
# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void MotePlatformP$SerialIdPin$makeInput(void );
#line 30
static void MotePlatformP$SerialIdPin$clr(void );
# 26 "/opt/tinyos-2.1.0/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void );
# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 47
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void );
#line 52
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void );
#line 52
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void );
# 33 "/opt/tinyos-2.1.0/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4327 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline error_t MeasureClockC$Init$init(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t RealMainP$SoftwareInit$init(void );
# 49 "/opt/tinyos-2.1.0/tos/interfaces/Boot.nc"
static void RealMainP$Boot$booted(void );
# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
static error_t RealMainP$PlatformInit$init(void );
# 46 "/opt/tinyos-2.1.0/tos/interfaces/Scheduler.nc"
static void RealMainP$Scheduler$init(void );
#line 61
static void RealMainP$Scheduler$taskLoop(void );
#line 54
static bool RealMainP$Scheduler$runNextTask(void );
# 52 "/opt/tinyos-2.1.0/tos/system/RealMainP.nc"
int main(void )   ;
# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(
# 45 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2adc4c97d960);
# 59 "/opt/tinyos-2.1.0/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP$McuSleep$sleep(void );
# 50 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4328 {

  SchedulerBasicP$NUM_TASKS = 14U, 
  SchedulerBasicP$NO_TASK = 255
};

uint8_t SchedulerBasicP$m_head;
uint8_t SchedulerBasicP$m_tail;
uint8_t SchedulerBasicP$m_next[SchedulerBasicP$NUM_TASKS];








static __inline uint8_t SchedulerBasicP$popTask(void );
#line 86
static inline bool SchedulerBasicP$isWaiting(uint8_t id);




static inline bool SchedulerBasicP$pushTask(uint8_t id);
#line 113
static inline void SchedulerBasicP$Scheduler$init(void );









static bool SchedulerBasicP$Scheduler$runNextTask(void );
#line 138
static inline void SchedulerBasicP$Scheduler$taskLoop(void );
#line 159
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id);




static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 54 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void );
# 58 "/opt/tinyos-2.1.0/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC$atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC$getPowerState(void );
#line 97
static inline void McuSleepC$McuSleep$sleep(void );
#line 110
static inline void McuSleepC$McuPowerState$update(void );
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP$Compare$fired(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP$Timer$overflow(void );
# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP$Timer$get(void );
#line 76
static inline void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t x);
#line 94
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void );
#line 122
static inline void HplAtm128Timer0AsyncP$Compare$start(void );









static inline uint8_t HplAtm128Timer0AsyncP$Compare$get(void );


static inline void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP$stabiliseTimer0(void );
#line 155
static inline mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void );
#line 178
void __vector_15(void ) __attribute((signal))   ;





void __vector_16(void ) __attribute((signal))   ;
#line 198
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag(void );
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P$CompareA$fired(void );
# 51 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Capture$size_type t);
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P$CompareB$fired(void );
#line 49
static void HplAtm128Timer1P$CompareC$fired(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer1P$Timer$overflow(void );
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P$Timer$get(void );


static inline void HplAtm128Timer1P$Timer$set(uint16_t t);








static inline void HplAtm128Timer1P$Timer$setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void );









static inline uint16_t HplAtm128Timer1P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128_TCCR1B_t x);
#line 122
static inline void HplAtm128Timer1P$Capture$setEdge(bool up);



static inline void HplAtm128Timer1P$Capture$reset(void );
static inline void HplAtm128Timer1P$CompareA$reset(void );



static inline void HplAtm128Timer1P$Timer$start(void );
static inline void HplAtm128Timer1P$Capture$start(void );
static inline void HplAtm128Timer1P$CompareA$start(void );




static inline void HplAtm128Timer1P$Capture$stop(void );
static inline void HplAtm128Timer1P$CompareA$stop(void );




static inline bool HplAtm128Timer1P$Timer$test(void );
#line 183
static inline void HplAtm128Timer1P$CompareA$set(uint16_t t);
#line 195
void __vector_12(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P$CompareB$default$fired(void );
void __vector_13(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P$CompareC$default$fired(void );
void __vector_24(void ) __attribute((interrupt))   ;



void __vector_11(void ) __attribute((interrupt))   ;



void __vector_14(void ) __attribute((interrupt))   ;
# 95 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(uint8_t scale);
#line 58
static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start(void );
# 42 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void );
# 67 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$fired(void );
# 53 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void );
#line 45
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type t);










static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void );


static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void );
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void );
# 65 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop(void );








static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size dt);
#line 110
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void );






static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void );
# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow(void );
# 78 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test(void );
#line 52
static /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get(void );
# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void );
# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get(void );






static bool /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending(void );










static void /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$overflow(void );
# 56 "/opt/tinyos-2.1.0/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type /*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper;

enum /*Counter32khz32C.Transform32*/TransformCounterC$0$__nesc_unnamed4329 {

  TransformCounterC$0$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type ) - /*Counter32khz32C.Transform32*/TransformCounterC$0$LOW_SHIFT_RIGHT, 
  TransformCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type ) + 0, 



  TransformCounterC$0$OVERFLOW_MASK = /*Counter32khz32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type )2 << (/*Counter32khz32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void );
#line 122
static inline void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void );
# 67 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired(void );
#line 92
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type dt);
#line 62
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop(void );
# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get(void );
# 66 "/opt/tinyos-2.1.0/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$__nesc_unnamed4330 {

  TransformAlarmC$0$MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type ) - 1 - 0, 
  TransformAlarmC$0$MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY_LOG2
};

static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void );
#line 91
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm(void );
#line 136
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt);









static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt);




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void );
#line 166
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void );
# 22 "/opt/tinyos-2.1.0/tos/system/NoInitC.nc"
static inline error_t NoInitC$Init$init(void );
# 50 "/opt/tinyos-2.1.0/tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(uint16_t time);
# 79 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(bool up);
#line 55
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop(void );
# 42 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(uint8_t mode);









static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(uint16_t time);
# 45 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void );
#line 40
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void );
#line 59
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool low_to_high);
#line 35
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void );
# 57 "/opt/tinyos-2.1.0/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired(void );
# 15 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(bool rising);
#line 29
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable(void );




static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void );
# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void HplAtm128InterruptSigP$IntSig6$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig1$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig4$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig7$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig2$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig5$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig0$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig3$fired(void );
# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
void __vector_1(void ) __attribute((signal))   ;




void __vector_2(void ) __attribute((signal))   ;




void __vector_3(void ) __attribute((signal))   ;




void __vector_4(void ) __attribute((signal))   ;




void __vector_5(void ) __attribute((signal))   ;




void __vector_6(void ) __attribute((signal))   ;




void __vector_7(void ) __attribute((signal))   ;




void __vector_8(void ) __attribute((signal))   ;
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void );
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void );
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired(void );
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void );
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void );
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void );
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void );
# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void );



static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool low_to_high);
#line 61
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void );
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void );
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void );
# 32 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static bool HplCC2420InterruptsP$CC_CCA$get(void );
# 57 "/opt/tinyos-2.1.0/tos/interfaces/GpioInterrupt.nc"
static void HplCC2420InterruptsP$CCA$fired(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t HplCC2420InterruptsP$CCATask$postTask(void );
# 69 "/opt/tinyos-2.1.0/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
enum HplCC2420InterruptsP$__nesc_unnamed4331 {
#line 69
  HplCC2420InterruptsP$CCATask = 5U
};
#line 69
typedef int HplCC2420InterruptsP$__nesc_sillytask_CCATask[HplCC2420InterruptsP$CCATask];
#line 56
uint8_t HplCC2420InterruptsP$ccaWaitForState;

uint8_t HplCC2420InterruptsP$ccaLastState;

bool HplCC2420InterruptsP$ccaCheckDisabled = FALSE;








static inline void HplCC2420InterruptsP$CCATask$runTask(void );
#line 89
static inline error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void );
#line 105
static inline error_t HplCC2420InterruptsP$CCA$disable(void );
# 59 "/opt/tinyos-2.1.0/tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP$SpiPacket$send(
#line 48
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP$Fifo$writeDone(
# 46 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d11f328, 
# 91 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP$Fifo$readDone(
# 46 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d11f328, 
# 71 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP$ChipSpiResource$releasing(void );
# 34 "/opt/tinyos-2.1.0/tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP$SpiByte$write(uint8_t tx);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
static void CC2420SpiP$WorkingState$toIdle(void );




static bool CC2420SpiP$WorkingState$isIdle(void );
#line 45
static error_t CC2420SpiP$WorkingState$requestState(uint8_t reqState);
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$SpiResource$release(void );
#line 87
static error_t CC2420SpiP$SpiResource$immediateRequest(void );
#line 78
static error_t CC2420SpiP$SpiResource$request(void );
#line 118
static bool CC2420SpiP$SpiResource$isOwner(void );
#line 92
static void CC2420SpiP$Resource$granted(
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2adc4d121158);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t CC2420SpiP$grant$postTask(void );
# 88 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP$__nesc_unnamed4332 {
#line 88
  CC2420SpiP$grant = 6U
};
#line 88
typedef int CC2420SpiP$__nesc_sillytask_grant[CC2420SpiP$grant];
#line 63
enum CC2420SpiP$__nesc_unnamed4333 {
  CC2420SpiP$RESOURCE_COUNT = 5U, 
  CC2420SpiP$NO_HOLDER = 0xFF
};


enum CC2420SpiP$__nesc_unnamed4334 {
  CC2420SpiP$S_IDLE, 
  CC2420SpiP$S_BUSY
};


uint16_t CC2420SpiP$m_addr;


uint8_t CC2420SpiP$m_requests = 0;


uint8_t CC2420SpiP$m_holder = CC2420SpiP$NO_HOLDER;


bool CC2420SpiP$release;


static error_t CC2420SpiP$attemptRelease(void );







static inline void CC2420SpiP$ChipSpiResource$abortRelease(void );






static inline error_t CC2420SpiP$ChipSpiResource$attemptRelease(void );




static error_t CC2420SpiP$Resource$request(uint8_t id);
#line 126
static error_t CC2420SpiP$Resource$immediateRequest(uint8_t id);
#line 149
static error_t CC2420SpiP$Resource$release(uint8_t id);
#line 178
static inline uint8_t CC2420SpiP$Resource$isOwner(uint8_t id);





static inline void CC2420SpiP$SpiResource$granted(void );




static cc2420_status_t CC2420SpiP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline error_t CC2420SpiP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline cc2420_status_t CC2420SpiP$Fifo$write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static cc2420_status_t CC2420SpiP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static inline cc2420_status_t CC2420SpiP$Reg$read(uint8_t addr, uint16_t *data);
#line 305
static cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data);
#line 318
static cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr);










static void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP$attemptRelease(void );
#line 358
static inline void CC2420SpiP$grant$runTask(void );








static inline void CC2420SpiP$Resource$default$granted(uint8_t id);


static inline void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/opt/tinyos-2.1.0/tos/system/StateImplP.nc"
uint8_t StateImplP$state[4U];

enum StateImplP$__nesc_unnamed4335 {
  StateImplP$S_IDLE = 0
};


static inline error_t StateImplP$Init$init(void );
#line 96
static error_t StateImplP$State$requestState(uint8_t id, uint8_t reqState);
#line 111
static inline void StateImplP$State$forceState(uint8_t id, uint8_t reqState);






static inline void StateImplP$State$toIdle(uint8_t id);







static inline bool StateImplP$State$isIdle(uint8_t id);






static bool StateImplP$State$isState(uint8_t id, uint8_t myState);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t Atm128SpiP$zeroTask$postTask(void );
# 71 "/opt/tinyos-2.1.0/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP$SpiPacket$sendDone(
#line 64
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$ResourceArbiter$release(
# 84 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2adc4d1cc6e0);
# 87 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$ResourceArbiter$immediateRequest(
# 84 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2adc4d1cc6e0);
# 78 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$ResourceArbiter$request(
# 84 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2adc4d1cc6e0);
# 118 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static bool Atm128SpiP$ResourceArbiter$isOwner(
# 84 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2adc4d1cc6e0);
# 72 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP$Spi$sleep(void );
#line 66
static void Atm128SpiP$Spi$initMaster(void );
#line 96
static void Atm128SpiP$Spi$enableInterrupt(bool enabled);
#line 80
static uint8_t Atm128SpiP$Spi$read(void );
#line 125
static void Atm128SpiP$Spi$setMasterDoubleSpeed(bool on);
#line 114
static void Atm128SpiP$Spi$setClock(uint8_t speed);
#line 108
static void Atm128SpiP$Spi$setClockPolarity(bool highWhenIdle);
#line 86
static void Atm128SpiP$Spi$write(uint8_t data);
#line 99
static void Atm128SpiP$Spi$enableSpi(bool busOn);
#line 111
static void Atm128SpiP$Spi$setClockPhase(bool sampleOnTrailing);
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void Atm128SpiP$Resource$granted(
# 80 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2adc4d1ba020);
# 44 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerState.nc"
static void Atm128SpiP$McuPowerState$update(void );
# 80 "/opt/tinyos-2.1.0/tos/interfaces/ArbiterInfo.nc"
static bool Atm128SpiP$ArbiterInfo$inUse(void );
# 207 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP$__nesc_unnamed4336 {
#line 207
  Atm128SpiP$zeroTask = 7U
};
#line 207
typedef int Atm128SpiP$__nesc_sillytask_zeroTask[Atm128SpiP$zeroTask];
#line 90
uint16_t Atm128SpiP$len;
uint8_t * Atm128SpiP$txBuffer;
uint8_t * Atm128SpiP$rxBuffer;
uint16_t Atm128SpiP$pos;

enum Atm128SpiP$__nesc_unnamed4337 {
  Atm128SpiP$SPI_IDLE, 
  Atm128SpiP$SPI_BUSY, 
  Atm128SpiP$SPI_ATOMIC_SIZE = 10
};





static void Atm128SpiP$startSpi(void );
#line 119
static inline void Atm128SpiP$stopSpi(void );







static uint8_t Atm128SpiP$SpiByte$write(uint8_t tx);
#line 162
static error_t Atm128SpiP$sendNextPart(void );
#line 207
static inline void Atm128SpiP$zeroTask$runTask(void );
#line 241
static error_t Atm128SpiP$SpiPacket$send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen);
#line 265
static inline void Atm128SpiP$Spi$dataReady(uint8_t data);
#line 305
static inline error_t Atm128SpiP$Resource$immediateRequest(uint8_t id);







static inline error_t Atm128SpiP$Resource$request(uint8_t id);








static inline error_t Atm128SpiP$Resource$release(uint8_t id);









static inline uint8_t Atm128SpiP$Resource$isOwner(uint8_t id);



static inline void Atm128SpiP$ResourceArbiter$granted(uint8_t id);



static inline void Atm128SpiP$Resource$default$granted(uint8_t id);
# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP$MISO$makeInput(void );

static void HplAtm128SpiP$SCK$makeOutput(void );
# 44 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerState.nc"
static void HplAtm128SpiP$Mcu$update(void );
# 92 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP$SPI$dataReady(uint8_t data);
# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP$MOSI$makeOutput(void );
# 79 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$initMaster(void );
#line 94
static inline void HplAtm128SpiP$SPI$sleep(void );



static inline uint8_t HplAtm128SpiP$SPI$read(void );
static inline void HplAtm128SpiP$SPI$write(uint8_t d);


void __vector_17(void ) __attribute((signal))   ;
#line 115
static void HplAtm128SpiP$SPI$enableInterrupt(bool enabled);
#line 130
static void HplAtm128SpiP$SPI$enableSpi(bool enabled);
#line 156
static inline void HplAtm128SpiP$SPI$setMasterBit(bool isMaster);
#line 169
static inline void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle);
#line 183
static inline void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing);
#line 200
static inline void HplAtm128SpiP$SPI$setClock(uint8_t v);
#line 213
static inline void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool on);
# 39 "/opt/tinyos-2.1.0/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4338 {
#line 39
  FcfsResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void );
#line 72
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.1.0/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(
# 52 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2adc4d2ae408);
# 51 "/opt/tinyos-2.1.0/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(
# 52 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2adc4d2ae408);
# 55 "/opt/tinyos-2.1.0/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(
# 56 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2adc4d2ad920);
# 49 "/opt/tinyos-2.1.0/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(
# 56 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2adc4d2ad920);
# 69 "/opt/tinyos-2.1.0/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void );
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(
# 51 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2adc4d2af258);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void );
# 69 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4339 {
#line 69
  SimpleArbiterP$0$grantedTask = 8U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4340 {
#line 62
  SimpleArbiterP$0$RES_IDLE = 0, SimpleArbiterP$0$RES_GRANTING = 1, SimpleArbiterP$0$RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4341 {
#line 63
  SimpleArbiterP$0$NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId;



static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id);
#line 84
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id);
#line 97
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id);
#line 123
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void );
#line 147
static uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(uint8_t id);






static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void );
#line 166
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void HplCC2420SpiP$SS$makeOutput(void );
#line 29
static void HplCC2420SpiP$SS$set(void );
static void HplCC2420SpiP$SS$clr(void );
# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static void HplCC2420SpiP$Resource$granted(void );
#line 110
static error_t HplCC2420SpiP$SubResource$release(void );
#line 87
static error_t HplCC2420SpiP$SubResource$immediateRequest(void );
#line 78
static error_t HplCC2420SpiP$SubResource$request(void );
#line 118
static bool HplCC2420SpiP$SubResource$isOwner(void );
# 51 "/opt/tinyos-2.1.0/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP$Resource$request(void );




static inline error_t HplCC2420SpiP$Resource$immediateRequest(void );










static inline void HplCC2420SpiP$SubResource$granted(void );







static inline error_t HplCC2420SpiP$Resource$release(void );







static inline bool HplCC2420SpiP$Resource$isOwner(void );
# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void LedsP$Led0$makeOutput(void );
#line 29
static void LedsP$Led0$set(void );

static void LedsP$Led1$toggle(void );



static void LedsP$Led1$makeOutput(void );
#line 29
static void LedsP$Led1$set(void );





static void LedsP$Led2$makeOutput(void );
#line 29
static void LedsP$Led2$set(void );
# 45 "/opt/tinyos-2.1.0/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void );
#line 88
static inline void LedsP$Leds$led1Toggle(void );
# 51 "/opt/tinyos-2.1.0/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC$addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC$group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
#line 82
static inline am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void );
#line 95
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 81 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP$RadioBackoff$requestInitialBackoff(message_t * msg);






static void CC2420TransmitP$RadioBackoff$requestCongestionBackoff(message_t * msg);
# 59 "/opt/tinyos-2.1.0/tos/interfaces/PacketTimeStamp.nc"
static void CC2420TransmitP$PacketTimeStamp$clear(
#line 55
message_t * msg);
#line 67
static void CC2420TransmitP$PacketTimeStamp$set(
#line 62
message_t * msg, 




CC2420TransmitP$PacketTimeStamp$size_type value);
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$STXONCCA$strobe(void );
# 43 "/opt/tinyos-2.1.0/tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void );
#line 55
static void CC2420TransmitP$CaptureSFD$disable(void );
#line 42
static error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void );
# 98 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static CC2420TransmitP$BackoffTimer$size_type CC2420TransmitP$BackoffTimer$getNow(void );
#line 55
static void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type dt);






static void CC2420TransmitP$BackoffTimer$stop(void );
# 63 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420TransmitP$TXFIFO_RAM$write(uint8_t offset, uint8_t * data, uint8_t length);
# 55 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t data);
# 55 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP$CC2420Receive$sfd_dropped(void );
#line 49
static void CC2420TransmitP$CC2420Receive$sfd(uint32_t time);
# 73 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420TransmitP$Send$sendDone(message_t * p_msg, error_t error);
# 31 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP$ChipSpiResource$abortRelease(void );







static error_t CC2420TransmitP$ChipSpiResource$attemptRelease(void );
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$SFLUSHTX$strobe(void );
# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP$CSN$makeOutput(void );
#line 29
static void CC2420TransmitP$CSN$set(void );
static void CC2420TransmitP$CSN$clr(void );
# 42 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TransmitP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420TransmitP$CC2420PacketBody$getMetadata(message_t * msg);
# 47 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420TransmitP$PacketTimeSyncOffset$get(
#line 42
message_t * msg);
#line 39
static bool CC2420TransmitP$PacketTimeSyncOffset$isSet(
#line 35
message_t * msg);
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t CC2420TransmitP$SpiResource$release(void );
#line 87
static error_t CC2420TransmitP$SpiResource$immediateRequest(void );
#line 78
static error_t CC2420TransmitP$SpiResource$request(void );
# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP$CCA$makeInput(void );
#line 32
static bool CC2420TransmitP$CCA$get(void );
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$SNOP$strobe(void );
# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP$SFD$makeInput(void );
#line 32
static bool CC2420TransmitP$SFD$get(void );
# 82 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t * data, uint8_t length);
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$STXON$strobe(void );
# 90 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
#line 80
typedef enum CC2420TransmitP$__nesc_unnamed4342 {
  CC2420TransmitP$S_STOPPED, 
  CC2420TransmitP$S_STARTED, 
  CC2420TransmitP$S_LOAD, 
  CC2420TransmitP$S_SAMPLE_CCA, 
  CC2420TransmitP$S_BEGIN_TRANSMIT, 
  CC2420TransmitP$S_SFD, 
  CC2420TransmitP$S_EFD, 
  CC2420TransmitP$S_ACK_WAIT, 
  CC2420TransmitP$S_CANCEL
} CC2420TransmitP$cc2420_transmit_state_t;





enum CC2420TransmitP$__nesc_unnamed4343 {
  CC2420TransmitP$CC2420_ABORT_PERIOD = 320
};

message_t * CC2420TransmitP$m_msg;

bool CC2420TransmitP$m_cca;

uint8_t CC2420TransmitP$m_tx_power;

CC2420TransmitP$cc2420_transmit_state_t CC2420TransmitP$m_state = CC2420TransmitP$S_STOPPED;

bool CC2420TransmitP$m_receiving = FALSE;

uint16_t CC2420TransmitP$m_prev_time;


bool CC2420TransmitP$sfdHigh;


bool CC2420TransmitP$abortSpiRelease;


int8_t CC2420TransmitP$totalCcaChecks;


uint16_t CC2420TransmitP$myInitialBackoff;


uint16_t CC2420TransmitP$myCongestionBackoff;



static inline error_t CC2420TransmitP$send(message_t * p_msg, bool cca);

static void CC2420TransmitP$loadTXFIFO(void );
static void CC2420TransmitP$attemptSend(void );
static void CC2420TransmitP$congestionBackoff(void );
static error_t CC2420TransmitP$acquireSpiResource(void );
static inline error_t CC2420TransmitP$releaseSpiResource(void );
static void CC2420TransmitP$signalDone(error_t err);



static inline error_t CC2420TransmitP$Init$init(void );







static inline error_t CC2420TransmitP$StdControl$start(void );










static inline error_t CC2420TransmitP$StdControl$stop(void );
#line 172
static inline error_t CC2420TransmitP$Send$send(message_t * p_msg, bool useCca);
#line 223
static inline void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t backoffTime);







static inline void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t backoffTime);







static __inline uint32_t CC2420TransmitP$time16to32(uint16_t time, uint32_t recent_time);
#line 260
static inline void CC2420TransmitP$CaptureSFD$captured(uint16_t time);
#line 341
static inline void CC2420TransmitP$ChipSpiResource$releasing(void );
#line 353
static inline void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg);
#line 381
static inline void CC2420TransmitP$SpiResource$granted(void );
#line 419
static inline void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 451
static inline void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline void CC2420TransmitP$BackoffTimer$fired(void );
#line 512
static inline error_t CC2420TransmitP$send(message_t * p_msg, bool cca);
#line 580
static void CC2420TransmitP$attemptSend(void );
#line 622
static void CC2420TransmitP$congestionBackoff(void );






static error_t CC2420TransmitP$acquireSpiResource(void );







static inline error_t CC2420TransmitP$releaseSpiResource(void );
#line 659
static void CC2420TransmitP$loadTXFIFO(void );
#line 684
static void CC2420TransmitP$signalDone(error_t err);
# 32 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP$FIFO$get(void );
# 86 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled(void );
#line 110
static bool CC2420ReceiveP$CC2420Config$isAutoAckEnabled(void );
#line 105
static bool CC2420ReceiveP$CC2420Config$isHwAutoAckDefault(void );
#line 64
static uint16_t CC2420ReceiveP$CC2420Config$getShortAddr(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP$receiveDone_task$postTask(void );
# 32 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP$FIFOP$get(void );
# 59 "/opt/tinyos-2.1.0/tos/interfaces/PacketTimeStamp.nc"
static void CC2420ReceiveP$PacketTimeStamp$clear(
#line 55
message_t * msg);
#line 67
static void CC2420ReceiveP$PacketTimeStamp$set(
#line 62
message_t * msg, 




CC2420ReceiveP$PacketTimeStamp$size_type value);
# 63 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP$CC2420Receive$receive(uint8_t type, message_t * message);
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP$SACK$strobe(void );
# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
static void CC2420ReceiveP$CSN$set(void );
static void CC2420ReceiveP$CSN$clr(void );
# 42 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ReceiveP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420ReceiveP$CC2420PacketBody$getMetadata(message_t * msg);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ReceiveP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP$SpiResource$release(void );
#line 87
static error_t CC2420ReceiveP$SpiResource$immediateRequest(void );
#line 78
static error_t CC2420ReceiveP$SpiResource$request(void );
#line 118
static bool CC2420ReceiveP$SpiResource$isOwner(void );
# 62 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t * data, uint8_t length);
# 50 "/opt/tinyos-2.1.0/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP$InterruptFIFOP$disable(void );
#line 43
static error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void );
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void );
# 115 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
enum CC2420ReceiveP$__nesc_unnamed4344 {
#line 115
  CC2420ReceiveP$receiveDone_task = 9U
};
#line 115
typedef int CC2420ReceiveP$__nesc_sillytask_receiveDone_task[CC2420ReceiveP$receiveDone_task];
#line 76
#line 70
typedef enum CC2420ReceiveP$__nesc_unnamed4345 {
  CC2420ReceiveP$S_STOPPED, 
  CC2420ReceiveP$S_STARTED, 
  CC2420ReceiveP$S_RX_LENGTH, 
  CC2420ReceiveP$S_RX_FCF, 
  CC2420ReceiveP$S_RX_PAYLOAD
} CC2420ReceiveP$cc2420_receive_state_t;

enum CC2420ReceiveP$__nesc_unnamed4346 {
  CC2420ReceiveP$RXFIFO_SIZE = 128, 
  CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP$SACK_HEADER_LENGTH = 7
};

uint32_t CC2420ReceiveP$m_timestamp_queue[CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE];

uint8_t CC2420ReceiveP$m_timestamp_head;

uint8_t CC2420ReceiveP$m_timestamp_size;


uint8_t CC2420ReceiveP$m_missed_packets;


bool CC2420ReceiveP$receivingPacket;


uint8_t CC2420ReceiveP$rxFrameLength;

uint8_t CC2420ReceiveP$m_bytes_left;

message_t * CC2420ReceiveP$m_p_rx_buf;

message_t CC2420ReceiveP$m_rx_buf;

CC2420ReceiveP$cc2420_receive_state_t CC2420ReceiveP$m_state;


static void CC2420ReceiveP$reset_state(void );
static void CC2420ReceiveP$beginReceive(void );
static void CC2420ReceiveP$receive(void );
static void CC2420ReceiveP$waitForNextPacket(void );
static void CC2420ReceiveP$flush(void );
static inline bool CC2420ReceiveP$passesAddressCheck(message_t * msg);




static inline error_t CC2420ReceiveP$Init$init(void );





static inline error_t CC2420ReceiveP$StdControl$start(void );









static inline error_t CC2420ReceiveP$StdControl$stop(void );
#line 149
static inline void CC2420ReceiveP$CC2420Receive$sfd(uint32_t time);








static inline void CC2420ReceiveP$CC2420Receive$sfd_dropped(void );
#line 175
static inline void CC2420ReceiveP$InterruptFIFOP$fired(void );










static inline void CC2420ReceiveP$SpiResource$granted(void );








static inline void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 318
static inline void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP$receiveDone_task$runTask(void );
#line 347
static inline void CC2420ReceiveP$CC2420Config$syncDone(error_t error);






static void CC2420ReceiveP$beginReceive(void );
#line 372
static void CC2420ReceiveP$flush(void );
#line 389
static void CC2420ReceiveP$receive(void );









static void CC2420ReceiveP$waitForNextPacket(void );
#line 437
static void CC2420ReceiveP$reset_state(void );










static inline bool CC2420ReceiveP$passesAddressCheck(message_t *msg);
# 99 "/opt/tinyos-2.1.0/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_header_t * CC2420PacketP$CC2420PacketBody$getHeader(message_t * msg);



static inline cc2420_metadata_t *CC2420PacketP$CC2420PacketBody$getMetadata(message_t *msg);
#line 122
static void CC2420PacketP$PacketTimeStamp32khz$clear(message_t *msg);





static inline void CC2420PacketP$PacketTimeStamp32khz$set(message_t *msg, uint32_t value);
#line 158
static inline bool CC2420PacketP$PacketTimeSyncOffset$isSet(message_t *msg);








static uint8_t CC2420PacketP$PacketTimeSyncOffset$get(message_t *msg);
# 47 "/opt/tinyos-2.1.0/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void );
#line 37
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control);
# 67 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void );
# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void );
# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void );
# 39 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void );
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void );
# 38 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4347 {
  Atm128AlarmAsyncP$0$MINDT = 2, 
  Atm128AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void );
# 98 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void );
#line 92
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt);
#line 105
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void );
#line 62
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void );
# 72 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void );
# 63 "/opt/tinyos-2.1.0/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4348 {
#line 63
  AlarmToTimerC$0$fired = 10U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 125 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 118
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2adc4d647778);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4349 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 11U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4350 {

  VirtualizeTimerC$0$NUM_TIMERS = 2, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4351 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 89
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 128
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/opt/tinyos-2.1.0/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void );
# 41 "/opt/tinyos-2.1.0/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC$seed;


static inline error_t RandomMlcgC$Init$init(void );
#line 58
static uint32_t RandomMlcgC$Random$rand32(void );
#line 78
static inline uint16_t RandomMlcgC$Random$rand16(void );
# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static error_t UniqueSendP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
#line 89
static void UniqueSendP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 41 "/opt/tinyos-2.1.0/tos/interfaces/Random.nc"
static uint16_t UniqueSendP$Random$rand16(void );
# 42 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueSendP$CC2420PacketBody$getHeader(message_t * msg);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
static void UniqueSendP$State$toIdle(void );
#line 45
static error_t UniqueSendP$State$requestState(uint8_t reqState);
# 54 "/opt/tinyos-2.1.0/tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP$localSendId;

enum UniqueSendP$__nesc_unnamed4352 {
  UniqueSendP$S_IDLE, 
  UniqueSendP$S_SENDING
};


static inline error_t UniqueSendP$Init$init(void );
#line 75
static inline error_t UniqueSendP$Send$send(message_t *msg, uint8_t len);
#line 104
static inline void UniqueSendP$SubSend$sendDone(message_t *msg, error_t error);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueReceiveP$CC2420PacketBody$getHeader(message_t * msg);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$DuplicateReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 59 "/opt/tinyos-2.1.0/tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP$__nesc_unnamed4353 {
  am_addr_t source;
  uint8_t dsn;
} UniqueReceiveP$receivedMessages[4];

uint8_t UniqueReceiveP$writeIndex = 0;


uint8_t UniqueReceiveP$recycleSourceElement;

enum UniqueReceiveP$__nesc_unnamed4354 {
  UniqueReceiveP$INVALID_ELEMENT = 0xFF
};


static inline error_t UniqueReceiveP$Init$init(void );









static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn);


static inline message_t *UniqueReceiveP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len);
#line 111
static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 137
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn);
#line 158
static inline message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *msg, void *payload, uint8_t len);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
#line 89
static void CC2420TinyosNetworkP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$NonTinyosReceive$receive(
# 48 "/opt/tinyos-2.1.0/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x2adc4d74c728, 
# 60 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TinyosNetworkP$CC2420PacketBody$getHeader(message_t * msg);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 61 "/opt/tinyos-2.1.0/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP$Send$send(message_t *msg, uint8_t len);
#line 79
static inline void CC2420TinyosNetworkP$SubSend$sendDone(message_t *msg, error_t error);




static inline message_t *CC2420TinyosNetworkP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);









static inline message_t *CC2420TinyosNetworkP$NonTinyosReceive$default$receive(uint8_t networkId, message_t *msg, void *payload, uint8_t len);
# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static void /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static error_t /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$Send$send(
#line 56
message_t * msg, 







uint8_t len);
# 92 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
static void /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.1.0/tos/system/AMQueueEntryP.nc"
static inline error_t /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 40 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
am_id_t arg_0x2adc4d7da020, 
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 38 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
uint8_t arg_0x2adc4d7dce18, 
# 85 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(
#line 63
message_t * msg);
#line 83
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void );
# 67 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(
#line 132
message_t * amsg);
# 118 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4355 {
#line 118
  AMQueueImplP$0$CancelTask = 12U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4356 {
#line 161
  AMQueueImplP$0$errorTask = 13U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4357 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void );
#line 82
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
#line 155
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );
#line 181
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
static void HiddenMoteC$SendTimer$startPeriodic(uint32_t dt);
# 83 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
static error_t HiddenMoteC$RadioControl$start(void );
# 72 "/opt/tinyos-2.1.0/tos/interfaces/Leds.nc"
static void HiddenMoteC$Leds$led1Toggle(void );
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
static error_t HiddenMoteC$RssiMsgSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 13 "HiddenMoteC.nc"
message_t HiddenMoteC$msg;

static inline void HiddenMoteC$Boot$booted(void );



static inline void HiddenMoteC$RadioControl$startDone(error_t result);



static inline void HiddenMoteC$RadioControl$stopDone(error_t result);


static inline void HiddenMoteC$SendTimer$fired(void );




static inline void HiddenMoteC$RssiMsgSend$sendDone(message_t *m, error_t error);
# 86 "/opt/tinyos-2.1.0/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 86
{
   __asm volatile ("cli");}

#line 103
#line 102
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 106
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 112
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 113 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP$Scheduler$init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP$m_next, SchedulerBasicP$NO_TASK, sizeof SchedulerBasicP$m_next);
    SchedulerBasicP$m_head = SchedulerBasicP$NO_TASK;
    SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
  }
}

# 46 "/opt/tinyos-2.1.0/tos/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$init(void ){
#line 46
  SchedulerBasicP$Scheduler$init();
#line 46
}
#line 46
# 42 "/opt/tinyos-2.1.0/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 58 "/opt/tinyos-2.1.0/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 81 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 81
{
#line 81
  union __nesc_unnamed4358 {
#line 81
    Atm128TimerCtrlCapture_t f;
#line 81
    uint16_t t;
  } 
#line 81
  c = { .f = x };

#line 81
  return c.t;
}





static inline void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128_TCCR1B_t x)
#line 88
{
  * (volatile uint8_t *)(0x2E + 0x20) = HplAtm128Timer1P$TimerCtrlCapture2int(x);
}

#line 71
static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void )
#line 71
{
  return * (Atm128TimerCtrlCapture_t * )& * (volatile uint8_t *)(0x2E + 0x20);
}

#line 61
static inline void HplAtm128Timer1P$Timer$setScale(uint8_t s)
#line 61
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer1P$TimerCtrl$getCtrlCapture();

#line 63
  x.bits.cs = s;
  HplAtm128Timer1P$TimerCtrl$setCtrlCapture(x);
}

# 95 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(uint8_t scale){
#line 95
  HplAtm128Timer1P$Timer$setScale(scale);
#line 95
}
#line 95
# 131 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Timer$start(void )
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 2;
}

# 69 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start(void ){
#line 69
  HplAtm128Timer1P$Timer$start();
#line 69
}
#line 69
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Timer$set(uint16_t t)
#line 52
{
#line 52
  * (volatile uint16_t *)(0x2C + 0x20) = t;
}

# 58 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size t){
#line 58
  HplAtm128Timer1P$Timer$set(t);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start();
    /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(4);
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
inline static error_t MotePlatformP$SubInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 47 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )58U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 33
}
#line 33
# 26 "/opt/tinyos-2.1.0/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void )
#line 26
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 0;
}

# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 1;
}

# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 2;
}

# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 0;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 1;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 2;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput();
#line 35
}
#line 35
# 45 "/opt/tinyos-2.1.0/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    ;
    LedsP$Led0$makeOutput();
    LedsP$Led1$makeOutput();
    LedsP$Led2$makeOutput();
    LedsP$Led0$set();
    LedsP$Led1$set();
    LedsP$Led2$set();
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
inline static error_t PlatformP$MoteInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = LedsP$Init$init();
#line 51
  __nesc_result = ecombine(__nesc_result, MotePlatformP$PlatformInit$init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 41 "/opt/tinyos-2.1.0/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void )
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC$MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC$cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC$cycles = (MeasureClockC$cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
inline static error_t PlatformP$MeasureClock$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MeasureClockC$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 49 "/opt/tinyos-2.1.0/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP$power_init();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
inline static error_t RealMainP$PlatformInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PlatformP$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 54 "/opt/tinyos-2.1.0/tos/interfaces/Scheduler.nc"
inline static bool RealMainP$Scheduler$runNextTask(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = SchedulerBasicP$Scheduler$runNextTask();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 31 "HiddenMoteC.nc"
static inline void HiddenMoteC$RssiMsgSend$sendDone(message_t *m, error_t error)
#line 31
{
}

# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
inline static void /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  HiddenMoteC$RssiMsgSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.1.0/tos/system/AMQueueEntryP.nc"
static inline void /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 207 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x2adc4d7dce18, message_t * msg, error_t error){
#line 89
  switch (arg_0x2adc4d7dce18) {
#line 89
    case 0U:
#line 89
      /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x2adc4d7dce18, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 161
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void )
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg, FAIL);
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x2adc4d7da020, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = CC2420ActiveMessageP$AMSend$send(arg_0x2adc4d7da020, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 246 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

# 99 "/opt/tinyos-2.1.0/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_header_t * CC2420PacketP$CC2420PacketBody$getHeader(message_t * msg)
#line 99
{
  return (cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
}

# 42 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ActiveMessageP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 147 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg)
#line 147
{
  return __nesc_ntoh_leuint8(CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg)->length.data) - CC2420_SIZE;
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP$Packet$payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 67 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP$AMPacket$destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 117 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg)
#line 117
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 119
  return __nesc_ntoh_leuint8(header->type.data);
}

# 136 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = CC2420ActiveMessageP$AMPacket$type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 57 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
    }
}

#line 166
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void )
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(nextMsg);

#line 174
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask();
        }
    }
}

# 287 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline uint16_t CC2420ControlP$CC2420Config$getPanAddr(void )
#line 287
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 288
    {
      unsigned short __nesc_temp = 
#line 288
      CC2420ControlP$m_pan;

      {
#line 288
        __nesc_atomic_end(__nesc_atomic); 
#line 288
        return __nesc_temp;
      }
    }
#line 290
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ActiveMessageP$CC2420Config$getPanAddr(void ){
#line 70
  unsigned short __nesc_result;
#line 70

#line 70
  __nesc_result = CC2420ControlP$CC2420Config$getPanAddr();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 248 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SendNotifier$default$aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg)
#line 248
{
}

# 59 "/opt/tinyos-2.1.0/tos/interfaces/SendNotifier.nc"
inline static void CC2420ActiveMessageP$SendNotifier$aboutToSend(am_id_t arg_0x2adc4ca7ac50, am_addr_t dest, message_t * msg){
#line 59
    CC2420ActiveMessageP$SendNotifier$default$aboutToSend(arg_0x2adc4ca7ac50, dest, msg);
#line 59
}
#line 59
# 251 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

#line 301
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 301
{
  uint8_t *base = target;

#line 303
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 240
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

#line 257
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 257
{
#line 257
  __nesc_hton_uint8(target, value);
#line 257
  return value;
}

#line 281
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

#line 276
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

# 512 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$send(message_t * p_msg, bool cca)
#line 512
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 513
    {
      if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 515
            ECANCEL;

            {
#line 515
              __nesc_atomic_end(__nesc_atomic); 
#line 515
              return __nesc_temp;
            }
          }
        }
#line 518
      if (CC2420TransmitP$m_state != CC2420TransmitP$S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 519
            FAIL;

            {
#line 519
              __nesc_atomic_end(__nesc_atomic); 
#line 519
              return __nesc_temp;
            }
          }
        }
#line 522
      CC2420TransmitP$m_state = CC2420TransmitP$S_LOAD;
      CC2420TransmitP$m_cca = cca;
      CC2420TransmitP$m_msg = p_msg;
      CC2420TransmitP$totalCcaChecks = 0;
    }
#line 526
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP$acquireSpiResource() == SUCCESS) {
      CC2420TransmitP$loadTXFIFO();
    }

  return SUCCESS;
}

#line 172
static inline error_t CC2420TransmitP$Send$send(message_t * p_msg, bool useCca)
#line 172
{
  return CC2420TransmitP$send(p_msg, useCca);
}

# 51 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static error_t CC2420CsmaP$CC2420Transmit$send(message_t * p_msg, bool useCca){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420TransmitP$Send$send(p_msg, useCca);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 258 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$RadioBackoff$default$requestCca(am_id_t id, 
message_t *msg)
#line 259
{
}

# 95 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP$RadioBackoff$requestCca(am_id_t arg_0x2adc4ca79780, message_t * msg){
#line 95
    CC2420ActiveMessageP$RadioBackoff$default$requestCca(arg_0x2adc4ca79780, msg);
#line 95
}
#line 95
# 206 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SubBackoff$requestCca(message_t *msg)
#line 206
{

  CC2420ActiveMessageP$RadioBackoff$requestCca(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.data), msg);
}

# 95 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$RadioBackoff$requestCca(message_t * msg){
#line 95
  CC2420ActiveMessageP$SubBackoff$requestCca(msg);
#line 95
}
#line 95
# 111 "/opt/tinyos-2.1.0/tos/system/StateImplP.nc"
static inline void StateImplP$State$forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP$state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
inline static void CC2420CsmaP$SplitControlState$forceState(uint8_t reqState){
#line 51
  StateImplP$State$forceState(1U, reqState);
#line 51
}
#line 51
#line 66
inline static bool CC2420CsmaP$SplitControlState$isState(uint8_t myState){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = StateImplP$State$isState(1U, myState);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 103 "/opt/tinyos-2.1.0/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_metadata_t *CC2420PacketP$CC2420PacketBody$getMetadata(message_t *msg)
#line 103
{
  return (cc2420_metadata_t *)msg->metadata;
}

# 47 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420CsmaP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
#line 42
inline static cc2420_header_t * CC2420CsmaP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 123 "/opt/tinyos-2.1.0/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len)
#line 123
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;
#line 125
  cc2420_header_t *header = CC2420CsmaP$CC2420PacketBody$getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP$CC2420PacketBody$getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 128
    {
      if (!CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTED)) {
          {
            unsigned char __nesc_temp = 
#line 130
            FAIL;

            {
#line 130
              __nesc_atomic_end(__nesc_atomic); 
#line 130
              return __nesc_temp;
            }
          }
        }
#line 133
      CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_TRANSMITTING);
      CC2420CsmaP$m_msg = p_msg;
    }
#line 135
    __nesc_atomic_end(__nesc_atomic); }

  __nesc_hton_leuint8(header->length.data, len + CC2420_SIZE);
  (__nesc_temp42 = header->fcf.data, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) & (1 << IEEE154_FCF_ACK_REQ)));
  (__nesc_temp43 = header->fcf.data, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));

  __nesc_hton_int8(metadata->ack.data, FALSE);
  __nesc_hton_uint8(metadata->rssi.data, 0);
  __nesc_hton_uint8(metadata->lqi.data, 0);
  __nesc_hton_int8(metadata->timesync.data, FALSE);
  __nesc_hton_uint32(metadata->timestamp.data, CC2420_INVALID_TIMESTAMP);

  CC2420CsmaP$ccaOn = TRUE;
  CC2420CsmaP$RadioBackoff$requestCca(CC2420CsmaP$m_msg);

  CC2420CsmaP$CC2420Transmit$send(CC2420CsmaP$m_msg, CC2420CsmaP$ccaOn);
  return SUCCESS;
}

# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static error_t CC2420TinyosNetworkP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420CsmaP$Send$send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 42 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TinyosNetworkP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 61 "/opt/tinyos-2.1.0/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP$Send$send(message_t *msg, uint8_t len)
#line 61
{
  __nesc_hton_leuint8(CC2420TinyosNetworkP$CC2420PacketBody$getHeader(msg)->network.data, 0x3f);
  return CC2420TinyosNetworkP$SubSend$send(msg, len);
}

# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static error_t UniqueSendP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420TinyosNetworkP$Send$send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 42 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueSendP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 45 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
inline static error_t UniqueSendP$State$requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP$State$requestState(2U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 75 "/opt/tinyos-2.1.0/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP$Send$send(message_t *msg, uint8_t len)
#line 75
{
  error_t error;

#line 77
  if (UniqueSendP$State$requestState(UniqueSendP$S_SENDING) == SUCCESS) {
      __nesc_hton_leuint8(UniqueSendP$CC2420PacketBody$getHeader(msg)->dsn.data, UniqueSendP$localSendId++);

      if ((error = UniqueSendP$SubSend$send(msg, len)) != SUCCESS) {
          UniqueSendP$State$toIdle();
        }

      return error;
    }

  return EBUSY;
}

# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static error_t CC2420ActiveMessageP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = UniqueSendP$Send$send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 87 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP$SpiResource$immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = CC2420SpiP$Resource$immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 45 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
inline static error_t CC2420SpiP$WorkingState$requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP$State$requestState(0U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 118 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static bool Atm128SpiP$ResourceArbiter$isOwner(uint8_t arg_0x2adc4d1cc6e0){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(arg_0x2adc4d1cc6e0);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 332 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline uint8_t Atm128SpiP$Resource$isOwner(uint8_t id)
#line 332
{
  return Atm128SpiP$ResourceArbiter$isOwner(id);
}

# 118 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static bool HplCC2420SpiP$SubResource$isOwner(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = Atm128SpiP$Resource$isOwner(0U);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 83 "/opt/tinyos-2.1.0/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline bool HplCC2420SpiP$Resource$isOwner(void )
{
  return HplCC2420SpiP$SubResource$isOwner();
}

# 118 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static bool CC2420SpiP$SpiResource$isOwner(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = HplCC2420SpiP$Resource$isOwner();
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 47 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )56U &= ~(1 << 0);
}

# 30 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP$SS$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 0;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP$SS$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 170 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 170
{
}

# 49 "/opt/tinyos-2.1.0/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x2adc4d2ad920){
#line 49
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(arg_0x2adc4d2ad920);
#line 49
}
#line 49
# 168 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id)
#line 168
{
}

# 51 "/opt/tinyos-2.1.0/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(uint8_t arg_0x2adc4d2ae408){
#line 51
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(arg_0x2adc4d2ae408);
#line 51
}
#line 51
# 84 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id)
#line 84
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 86
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      FAIL;

#line 93
      return __nesc_temp;
    }
  }
}

# 87 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP$ResourceArbiter$immediateRequest(uint8_t arg_0x2adc4d1cc6e0){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(arg_0x2adc4d1cc6e0);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 305 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP$Resource$immediateRequest(uint8_t id)
#line 305
{
  error_t result = Atm128SpiP$ResourceArbiter$immediateRequest(id);

#line 307
  if (result == SUCCESS) {
      Atm128SpiP$startSpi();
    }
  return result;
}

# 87 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP$SubResource$immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = Atm128SpiP$Resource$immediateRequest(0U);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 56 "/opt/tinyos-2.1.0/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP$Resource$immediateRequest(void )
{
  error_t error = HplCC2420SpiP$SubResource$immediateRequest();

#line 59
  if (error == SUCCESS) 
    {
      HplCC2420SpiP$SS$makeOutput();
      HplCC2420SpiP$SS$clr();
    }
  return error;
}

# 87 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP$SpiResource$immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = HplCC2420SpiP$Resource$immediateRequest();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 110 "/opt/tinyos-2.1.0/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC$McuPowerState$update(void )
#line 110
{
}

# 44 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP$Mcu$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 156 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setMasterBit(bool isMaster)
#line 156
{
  if (isMaster) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 4);
    }
}

# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 1;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP$SCK$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )55U &= ~(1 << 3);
}

# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP$MISO$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput();
#line 33
}
#line 33
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 2;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP$MOSI$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput();
#line 35
}
#line 35
# 79 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$initMaster(void )
#line 79
{
  HplAtm128SpiP$MOSI$makeOutput();
  HplAtm128SpiP$MISO$makeInput();
  HplAtm128SpiP$SCK$makeOutput();
  HplAtm128SpiP$SPI$setMasterBit(TRUE);
}

# 66 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$initMaster(void ){
#line 66
  HplAtm128SpiP$SPI$initMaster();
#line 66
}
#line 66
# 213 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool on)
#line 213
{
  if (on) {
      * (volatile uint8_t *)(0x0E + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x0E + 0x20) &= ~(1 << 0);
    }
}

# 125 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$setMasterDoubleSpeed(bool on){
#line 125
  HplAtm128SpiP$SPI$setMasterDoubleSpeed(on);
#line 125
}
#line 125
# 169 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle)
#line 169
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 3);
    }
}

# 108 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$setClockPolarity(bool highWhenIdle){
#line 108
  HplAtm128SpiP$SPI$setClockPolarity(highWhenIdle);
#line 108
}
#line 108
# 183 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing)
#line 183
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 2);
    }
}

# 111 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$setClockPhase(bool sampleOnTrailing){
#line 111
  HplAtm128SpiP$SPI$setClockPhase(sampleOnTrailing);
#line 111
}
#line 111
# 200 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setClock(uint8_t v)
#line 200
{
  v &= 1 | 0;
  * (volatile uint8_t *)(0x0D + 0x20) = (* (volatile uint8_t *)(0x0D + 0x20) & ~(1 | 0)) | v;
}

# 114 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$setClock(uint8_t speed){
#line 114
  HplAtm128SpiP$SPI$setClock(speed);
#line 114
}
#line 114
# 118 "/opt/tinyos-2.1.0/tos/system/StateImplP.nc"
static inline void StateImplP$State$toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP$state[id] = StateImplP$S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
inline static void CC2420SpiP$WorkingState$toIdle(void ){
#line 56
  StateImplP$State$toIdle(0U);
#line 56
}
#line 56
# 78 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP$SpiResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP$Resource$request(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 86 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP$isWaiting(uint8_t id)
{
  return SchedulerBasicP$m_next[id] != SchedulerBasicP$NO_TASK || SchedulerBasicP$m_tail == id;
}

static inline bool SchedulerBasicP$pushTask(uint8_t id)
{
  if (!SchedulerBasicP$isWaiting(id)) 
    {
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_head = id;
          SchedulerBasicP$m_tail = id;
        }
      else 
        {
          SchedulerBasicP$m_next[SchedulerBasicP$m_tail] = id;
          SchedulerBasicP$m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 54 "/opt/tinyos-2.1.0/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail == id;
}

#line 72
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = id;
          }
        else {
#line 78
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail] = id;
          }
#line 79
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = id;
        {
          unsigned char __nesc_temp = 
#line 80
          SUCCESS;

#line 80
          return __nesc_temp;
        }
      }
#line 82
    {
      unsigned char __nesc_temp = 
#line 82
      EBUSY;

#line 82
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.1.0/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 166 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 166
{
}

# 43 "/opt/tinyos-2.1.0/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(uint8_t arg_0x2adc4d2ae408){
#line 43
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(arg_0x2adc4d2ae408);
#line 43
}
#line 43
# 71 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id)
#line 71
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 73
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_GRANTING;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask();
        {
          unsigned char __nesc_temp = 
#line 78
          SUCCESS;

#line 78
          return __nesc_temp;
        }
      }
#line 80
    {
      unsigned char __nesc_temp = 
#line 80
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(id);

#line 80
      return __nesc_temp;
    }
  }
}

# 78 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP$ResourceArbiter$request(uint8_t arg_0x2adc4d1cc6e0){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(arg_0x2adc4d1cc6e0);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 80 "/opt/tinyos-2.1.0/tos/interfaces/ArbiterInfo.nc"
inline static bool Atm128SpiP$ArbiterInfo$inUse(void ){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 313 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP$Resource$request(uint8_t id)
#line 313
{
  /* atomic removed: atomic calls only */
#line 314
  {
    if (!Atm128SpiP$ArbiterInfo$inUse()) {
        Atm128SpiP$startSpi();
      }
  }
  return Atm128SpiP$ResourceArbiter$request(id);
}

# 78 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP$SubResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = Atm128SpiP$Resource$request(0U);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 51 "/opt/tinyos-2.1.0/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP$Resource$request(void )
{
  return HplCC2420SpiP$SubResource$request();
}

# 78 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP$SpiResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = HplCC2420SpiP$Resource$request();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 55 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_TXCTRL, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 99 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$write(uint8_t d)
#line 99
{
#line 99
  * (volatile uint8_t *)(0x0F + 0x20) = d;
}

# 86 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$write(uint8_t data){
#line 86
  HplAtm128SpiP$SPI$write(data);
#line 86
}
#line 86
# 59 "/opt/tinyos-2.1.0/tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP$SpiPacket$send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = Atm128SpiP$SpiPacket$send(txBuf, rxBuf, len);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 34 "/opt/tinyos-2.1.0/tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP$SpiByte$write(uint8_t tx){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = Atm128SpiP$SpiByte$write(tx);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 126 "/opt/tinyos-2.1.0/tos/system/StateImplP.nc"
static inline bool StateImplP$State$isIdle(uint8_t id)
#line 126
{
  return StateImplP$State$isState(id, StateImplP$S_IDLE);
}

# 61 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
inline static bool CC2420SpiP$WorkingState$isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP$State$isIdle(0U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 214 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP$Fifo$write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 219
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 221
            status;

            {
#line 221
              __nesc_atomic_end(__nesc_atomic); 
#line 221
              return __nesc_temp;
            }
          }
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
#line 225
  CC2420SpiP$m_addr = addr;

  status = CC2420SpiP$SpiByte$write(CC2420SpiP$m_addr);
  CC2420SpiP$SpiPacket$send(data, (void *)0, len);

  return status;
}

# 82 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t * data, uint8_t length){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = CC2420SpiP$Fifo$write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t Atm128SpiP$zeroTask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(Atm128SpiP$zeroTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 92 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(t0, dt);
#line 92
}
#line 92
# 47 "/opt/tinyos-2.1.0/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}

#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(t0, dt);
#line 118
}
#line 118
# 204 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop();
#line 62
}
#line 62
# 60 "/opt/tinyos-2.1.0/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void )
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 67 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 67
}
#line 67
# 222 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();
}

# 98 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 98
  unsigned long __nesc_result;
#line 98

#line 98
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 85 "/opt/tinyos-2.1.0/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void )
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 125 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 125
  unsigned long __nesc_result;
#line 125

#line 125
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 89 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 124
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 94 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void )
#line 94
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4273 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 151 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 151
{
  __nesc_hton_leuint8(CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg)->length.data, len + CC2420_SIZE);
}

# 83 "/opt/tinyos-2.1.0/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 83
  CC2420ActiveMessageP$Packet$setPayloadLength(msg, len);
#line 83
}
#line 83
# 82 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static error_t /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 122 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type)
#line 122
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 124
  __nesc_hton_leuint8(header->type.data, type);
}

# 151 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
inline static void /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  CC2420ActiveMessageP$AMPacket$setType(amsg, t);
#line 151
}
#line 151
# 102 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 102
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 104
  __nesc_hton_leuint16(header->dest.data, addr);
}

# 92 "/opt/tinyos-2.1.0/tos/interfaces/AMPacket.nc"
inline static void /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  CC2420ActiveMessageP$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/opt/tinyos-2.1.0/tos/system/AMQueueEntryP.nc"
static inline error_t /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 10);
  return /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 69 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
inline static error_t HiddenMoteC$RssiMsgSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*HiddenMoteAppC.RssiMsgSender.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 48 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 1;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle();
#line 31
}
#line 31
# 88 "/opt/tinyos-2.1.0/tos/system/LedsP.nc"
static inline void LedsP$Leds$led1Toggle(void )
#line 88
{
  LedsP$Led1$toggle();
  ;
#line 90
  ;
}

# 72 "/opt/tinyos-2.1.0/tos/interfaces/Leds.nc"
inline static void HiddenMoteC$Leds$led1Toggle(void ){
#line 72
  LedsP$Leds$led1Toggle();
#line 72
}
#line 72
# 26 "HiddenMoteC.nc"
static inline void HiddenMoteC$SendTimer$fired(void )
#line 26
{
  HiddenMoteC$Leds$led1Toggle();
  HiddenMoteC$RssiMsgSend$send(17, &HiddenMoteC$msg, sizeof(RssiMsg ));
}

# 193 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x2adc4d647778){
#line 72
  switch (arg_0x2adc4d647778) {
#line 72
    case 1U:
#line 72
      HiddenMoteC$SendTimer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x2adc4d647778);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 135 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 135
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 45 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t){
#line 45
  HplAtm128Timer0AsyncP$Compare$set(t);
#line 45
}
#line 45
# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP$Timer$get(void )
#line 50
{
#line 50
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer0AsyncP$Timer$get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 206 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void )
#line 206
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerAsync$compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(n);
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 70 "/opt/tinyos-2.1.0/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void )
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 67 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 67
}
#line 67
# 128 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 72 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void ){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 72
}
#line 72
# 226 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned long __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt;

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 105
  unsigned long __nesc_result;
#line 105

#line 105
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 63 "/opt/tinyos-2.1.0/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

# 94 "/opt/tinyos-2.1.0/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP$NonTinyosReceive$default$receive(uint8_t networkId, message_t *msg, void *payload, uint8_t len)
#line 94
{
  return msg;
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP$NonTinyosReceive$receive(uint8_t arg_0x2adc4d74c728, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = CC2420TinyosNetworkP$NonTinyosReceive$default$receive(arg_0x2adc4d74c728, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

#line 257
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 257
{
#line 257
  return __nesc_ntoh_uint8(source);
}

# 241 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 241
{
  return msg;
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP$Snoop$receive(am_id_t arg_0x2adc4ca7dce8, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = CC2420ActiveMessageP$Snoop$default$receive(arg_0x2adc4ca7dce8, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 237 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 237
{
  return msg;
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP$Receive$receive(am_id_t arg_0x2adc4ca7d1a0, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = CC2420ActiveMessageP$Receive$default$receive(arg_0x2adc4ca7d1a0, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 61 "/opt/tinyos-2.1.0/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void )
#line 61
{
  return ActiveMessageAddressC$amAddress();
}

# 50 "/opt/tinyos-2.1.0/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t CC2420ActiveMessageP$ActiveMessageAddress$amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 88 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline am_addr_t CC2420ActiveMessageP$AMPacket$address(void )
#line 88
{
  return CC2420ActiveMessageP$ActiveMessageAddress$amAddress();
}

#line 112
static inline bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg)
#line 112
{
  return CC2420ActiveMessageP$AMPacket$destination(amsg) == CC2420ActiveMessageP$AMPacket$address() || 
  CC2420ActiveMessageP$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

# 47 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ActiveMessageP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 171 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 171
{

  if (! __nesc_ntoh_int8(CC2420ActiveMessageP$CC2420PacketBody$getMetadata(msg)->crc.data)) {
      return msg;
    }

  if (CC2420ActiveMessageP$AMPacket$isForMe(msg)) {
      return CC2420ActiveMessageP$Receive$receive(CC2420ActiveMessageP$AMPacket$type(msg), msg, payload, len);
    }
  else {
      return CC2420ActiveMessageP$Snoop$receive(CC2420ActiveMessageP$AMPacket$type(msg), msg, payload, len);
    }
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = CC2420ActiveMessageP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 137 "/opt/tinyos-2.1.0/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn)
#line 137
{
  uint8_t element = UniqueReceiveP$recycleSourceElement;
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 141
    {
      if (element == UniqueReceiveP$INVALID_ELEMENT || UniqueReceiveP$writeIndex == element) {

          element = UniqueReceiveP$writeIndex;
          increment = TRUE;
        }

      UniqueReceiveP$receivedMessages[element].source = msgSource;
      UniqueReceiveP$receivedMessages[element].dsn = msgDsn;
      if (increment) {
          UniqueReceiveP$writeIndex++;
          UniqueReceiveP$writeIndex %= 4;
        }
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}


static inline message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *msg, void *payload, uint8_t len)
#line 158
{
  return msg;
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP$DuplicateReceive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = UniqueReceiveP$DuplicateReceive$default$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 111 "/opt/tinyos-2.1.0/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn)
#line 111
{
  int i;

#line 113
  UniqueReceiveP$recycleSourceElement = UniqueReceiveP$INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 115
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP$receivedMessages[i].source == msgSource) {
              if (UniqueReceiveP$receivedMessages[i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
#line 120
                    TRUE;

                    {
#line 120
                      __nesc_atomic_end(__nesc_atomic); 
#line 120
                      return __nesc_temp;
                    }
                  }
                }
#line 123
              UniqueReceiveP$recycleSourceElement = i;
            }
        }
    }
#line 126
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

# 42 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueReceiveP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 85 "/opt/tinyos-2.1.0/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline message_t *UniqueReceiveP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len)
#line 86
{
  uint16_t msgSource = __nesc_ntoh_leuint16(UniqueReceiveP$CC2420PacketBody$getHeader(msg)->src.data);
  uint8_t msgDsn = __nesc_ntoh_leuint8(UniqueReceiveP$CC2420PacketBody$getHeader(msg)->dsn.data);

  if (UniqueReceiveP$hasSeen(msgSource, msgDsn)) {
      return UniqueReceiveP$DuplicateReceive$receive(msg, payload, len);
    }
  else {
      UniqueReceiveP$insert(msgSource, msgDsn);
      return UniqueReceiveP$Receive$receive(msg, payload, len);
    }
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = UniqueReceiveP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 84 "/opt/tinyos-2.1.0/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 84
{
  if (__nesc_ntoh_leuint8(CC2420TinyosNetworkP$CC2420PacketBody$getHeader(msg)->network.data) == 0x3f) {
      return CC2420TinyosNetworkP$Receive$receive(msg, payload, len);
    }
  else {
      return CC2420TinyosNetworkP$NonTinyosReceive$receive(__nesc_ntoh_leuint8(CC2420TinyosNetworkP$CC2420PacketBody$getHeader(msg)->network.data), msg, payload, len);
    }
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/Receive.nc"
inline static message_t * CC2420ReceiveP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = CC2420TinyosNetworkP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 64 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ReceiveP$CC2420Config$getShortAddr(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420ControlP$CC2420Config$getShortAddr();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 332 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void )
#line 332
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 333
    {
      unsigned char __nesc_temp = 
#line 333
      CC2420ControlP$addressRecognition;

      {
#line 333
        __nesc_atomic_end(__nesc_atomic); 
#line 333
        return __nesc_temp;
      }
    }
#line 335
    __nesc_atomic_end(__nesc_atomic); }
}

# 86 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled(void ){
#line 86
  unsigned char __nesc_result;
#line 86

#line 86
  __nesc_result = CC2420ControlP$CC2420Config$isAddressRecognitionEnabled();
#line 86

#line 86
  return __nesc_result;
#line 86
}
#line 86
# 42 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ReceiveP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 448 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline bool CC2420ReceiveP$passesAddressCheck(message_t *msg)
#line 448
{
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(msg);

  if (!CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled()) {
      return TRUE;
    }

  return __nesc_ntoh_leuint16(header->dest.data) == CC2420ReceiveP$CC2420Config$getShortAddr()
   || __nesc_ntoh_leuint16(header->dest.data) == AM_BROADCAST_ADDR;
}

# 47 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ReceiveP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 326 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$receiveDone_task$runTask(void )
#line 326
{
  cc2420_metadata_t *metadata = CC2420ReceiveP$CC2420PacketBody$getMetadata(CC2420ReceiveP$m_p_rx_buf);
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf);
  uint8_t length = __nesc_ntoh_leuint8(header->length.data);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

  __nesc_hton_int8(metadata->crc.data, buf[length] >> 7);
  __nesc_hton_uint8(metadata->lqi.data, buf[length] & 0x7f);
  __nesc_hton_uint8(metadata->rssi.data, buf[length - 1]);

  if (CC2420ReceiveP$passesAddressCheck(CC2420ReceiveP$m_p_rx_buf) && length >= CC2420_SIZE) {
      CC2420ReceiveP$m_p_rx_buf = CC2420ReceiveP$Receive$receive(CC2420ReceiveP$m_p_rx_buf, CC2420ReceiveP$m_p_rx_buf->data, 
      length - CC2420_SIZE);
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 342
    CC2420ReceiveP$receivingPacket = FALSE;
#line 342
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP$waitForNextPacket();
}

# 95 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$ChipSpiResource$abortRelease(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP$release = FALSE;
}

# 31 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420TransmitP$ChipSpiResource$abortRelease(void ){
#line 31
  CC2420SpiP$ChipSpiResource$abortRelease();
#line 31
}
#line 31
# 341 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$ChipSpiResource$releasing(void )
#line 341
{
  if (CC2420TransmitP$abortSpiRelease) {
      CC2420TransmitP$ChipSpiResource$abortRelease();
    }
}

# 24 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP$ChipSpiResource$releasing(void ){
#line 24
  CC2420TransmitP$ChipSpiResource$releasing();
#line 24
}
#line 24
# 44 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerState.nc"
inline static void Atm128SpiP$McuPowerState$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 94 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$sleep(void )
#line 94
{
}

# 72 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$sleep(void ){
#line 72
  HplAtm128SpiP$SPI$sleep();
#line 72
}
#line 72
#line 99
inline static void Atm128SpiP$Spi$enableSpi(bool busOn){
#line 99
  HplAtm128SpiP$SPI$enableSpi(busOn);
#line 99
}
#line 99
# 119 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$stopSpi(void )
#line 119
{
  Atm128SpiP$Spi$enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 121
  {
    Atm128SpiP$Spi$sleep();
  }
  Atm128SpiP$McuPowerState$update();
}

# 172 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 172
{
}

# 55 "/opt/tinyos-2.1.0/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x2adc4d2ad920){
#line 55
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x2adc4d2ad920);
#line 55
}
#line 55
# 58 "/opt/tinyos-2.1.0/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead;

#line 62
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
          }
#line 65
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 66
          id;

#line 66
          return __nesc_temp;
        }
      }
#line 68
    {
      unsigned char __nesc_temp = 
#line 68
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.1.0/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 50 "/opt/tinyos-2.1.0/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void )
#line 50
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
}

# 43 "/opt/tinyos-2.1.0/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 97 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id)
#line 97
{
  bool released = FALSE;

  /* atomic removed: atomic calls only */
#line 99
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId == id) {
        if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty() == FALSE) {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue();
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_GRANTING;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask();
          }
        else {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE;
          }
        released = TRUE;
      }
  }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP$ResourceArbiter$release(uint8_t arg_0x2adc4d1cc6e0){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(arg_0x2adc4d1cc6e0);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 322 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP$Resource$release(uint8_t id)
#line 322
{
  error_t error = Atm128SpiP$ResourceArbiter$release(id);

  /* atomic removed: atomic calls only */
#line 324
  {
    if (!Atm128SpiP$ArbiterInfo$inUse()) {
        Atm128SpiP$stopSpi();
      }
  }
  return error;
}

# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP$SubResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = Atm128SpiP$Resource$release(0U);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )56U |= 1 << 0;
}

# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP$SS$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 75 "/opt/tinyos-2.1.0/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP$Resource$release(void )
{
  if (HplCC2420SpiP$SubResource$isOwner()) {
    HplCC2420SpiP$SS$set();
    }
  return HplCC2420SpiP$SubResource$release();
}

# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP$SpiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = HplCC2420SpiP$Resource$release();
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 178 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline uint8_t CC2420SpiP$Resource$isOwner(uint8_t id)
#line 178
{
  /* atomic removed: atomic calls only */
#line 179
  {
    unsigned char __nesc_temp = 
#line 179
    CC2420SpiP$m_holder == id;

#line 179
    return __nesc_temp;
  }
}

# 118 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static bool CC2420ReceiveP$SpiResource$isOwner(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = CC2420SpiP$Resource$isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
#line 87
inline static error_t CC2420ReceiveP$SpiResource$immediateRequest(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = CC2420SpiP$Resource$immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
#line 78
inline static error_t CC2420ReceiveP$SpiResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP$Resource$request(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP$grant$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420SpiP$grant);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 184 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$SpiResource$granted(void )
#line 184
{
  CC2420SpiP$grant$postTask();
}

# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static void HplCC2420SpiP$Resource$granted(void ){
#line 92
  CC2420SpiP$SpiResource$granted();
#line 92
}
#line 92
# 67 "/opt/tinyos-2.1.0/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline void HplCC2420SpiP$SubResource$granted(void )
{
  HplCC2420SpiP$SS$makeOutput();
  HplCC2420SpiP$SS$clr();

  HplCC2420SpiP$Resource$granted();
}

# 340 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$Resource$default$granted(uint8_t id)
#line 340
{
}

# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static void Atm128SpiP$Resource$granted(uint8_t arg_0x2adc4d1ba020){
#line 92
  switch (arg_0x2adc4d1ba020) {
#line 92
    case 0U:
#line 92
      HplCC2420SpiP$SubResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      Atm128SpiP$Resource$default$granted(arg_0x2adc4d1ba020);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 336 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$ResourceArbiter$granted(uint8_t id)
#line 336
{
  Atm128SpiP$Resource$granted(id);
}

# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(uint8_t arg_0x2adc4d2af258){
#line 92
  Atm128SpiP$ResourceArbiter$granted(arg_0x2adc4d2af258);
#line 92
}
#line 92
# 154 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void )
#line 154
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 155
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY;
    }
#line 158
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
}

# 71 "/opt/tinyos-2.1.0/tos/interfaces/SpiPacket.nc"
inline static void Atm128SpiP$SpiPacket$sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 71
  CC2420SpiP$SpiPacket$sendDone(txBuf, rxBuf, len, error);
#line 71
}
#line 71
# 207 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$zeroTask$runTask(void )
#line 207
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 212
    {
      myLen = Atm128SpiP$len;
      rx = Atm128SpiP$rxBuffer;
      tx = Atm128SpiP$txBuffer;
      Atm128SpiP$rxBuffer = (void *)0;
      Atm128SpiP$txBuffer = (void *)0;
      Atm128SpiP$len = 0;
      Atm128SpiP$pos = 0;
      Atm128SpiP$SpiPacket$sendDone(tx, rx, myLen, SUCCESS);
    }
#line 221
    __nesc_atomic_end(__nesc_atomic); }
}

# 451 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 452
{
}

# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP$SpiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP$Resource$release(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP$CSN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP$receiveDone_task$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420ReceiveP$receiveDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 47 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TransmitP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *__nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 139 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareA$stop(void )
#line 139
{
#line 139
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 4);
}

# 59 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void ){
#line 59
  HplAtm128Timer1P$CompareA$stop();
#line 59
}
#line 59
# 65 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop(void )
#line 65
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
}

# 62 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop(void ){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 91 "/opt/tinyos-2.1.0/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop();
}

# 62 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP$BackoffTimer$stop(void ){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 42 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TransmitP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 353 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg)
#line 353
{
  cc2420_header_t *ack_header;
  cc2420_header_t *msg_header;
  cc2420_metadata_t *msg_metadata;
  uint8_t *ack_buf;
  uint8_t length;

  if (type == IEEE154_TYPE_ACK && CC2420TransmitP$m_msg) {
      ack_header = CC2420TransmitP$CC2420PacketBody$getHeader(ack_msg);
      msg_header = CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg);


      if (CC2420TransmitP$m_state == CC2420TransmitP$S_ACK_WAIT && __nesc_ntoh_leuint8(msg_header->dsn.data) == __nesc_ntoh_leuint8(ack_header->dsn.data)) {
          CC2420TransmitP$BackoffTimer$stop();

          msg_metadata = CC2420TransmitP$CC2420PacketBody$getMetadata(CC2420TransmitP$m_msg);
          ack_buf = (uint8_t *)ack_header;
          length = __nesc_ntoh_leuint8(ack_header->length.data);

          __nesc_hton_int8(msg_metadata->ack.data, TRUE);
          __nesc_hton_uint8(msg_metadata->rssi.data, ack_buf[length - 1]);
          __nesc_hton_uint8(msg_metadata->lqi.data, ack_buf[length] & 0x7f);
          CC2420TransmitP$signalDone(SUCCESS);
        }
    }
}

# 63 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420ReceiveP$CC2420Receive$receive(uint8_t type, message_t * message){
#line 63
  CC2420TransmitP$CC2420Receive$receive(type, message);
#line 63
}
#line 63
# 59 "/opt/tinyos-2.1.0/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP$PacketTimeStamp$clear(message_t * msg){
#line 59
  CC2420PacketP$PacketTimeStamp32khz$clear(msg);
#line 59
}
#line 59
# 128 "/opt/tinyos-2.1.0/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline void CC2420PacketP$PacketTimeStamp32khz$set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timestamp.data, value);
}

# 67 "/opt/tinyos-2.1.0/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP$PacketTimeStamp$set(message_t * msg, CC2420ReceiveP$PacketTimeStamp$size_type value){
#line 67
  CC2420PacketP$PacketTimeStamp32khz$set(msg, value);
#line 67
}
#line 67
# 209 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP$SpiPacket$send((void *)0, data, len);
}

# 62 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420SpiP$Fifo$continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
#line 51
inline static cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420SpiP$Fifo$beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 30 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP$CSN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP$SACK$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SACK);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 359 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void )
#line 359
{
  /* atomic removed: atomic calls only */
#line 360
  {
    unsigned char __nesc_temp = 
#line 360
    CC2420ControlP$hwAutoAckDefault;

#line 360
    return __nesc_temp;
  }
}

# 105 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP$CC2420Config$isHwAutoAckDefault(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = CC2420ControlP$CC2420Config$isHwAutoAckDefault();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 366 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void )
#line 366
{
  /* atomic removed: atomic calls only */
#line 367
  {
    unsigned char __nesc_temp = 
#line 367
    CC2420ControlP$autoAckEnabled;

#line 367
    return __nesc_temp;
  }
}

# 110 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP$CC2420Config$isAutoAckEnabled(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420ControlP$CC2420Config$isAutoAckEnabled();
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 45 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )33U & (1 << 6)) != 0;
}

# 32 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP$FIFOP$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 45 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )54U & (1 << 7)) != 0;
}

# 32 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP$FIFO$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 195 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 196
{
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

#line 200
  CC2420ReceiveP$rxFrameLength = buf[0];

  switch (CC2420ReceiveP$m_state) {

      case CC2420ReceiveP$S_RX_LENGTH: 
        CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_FCF;
      if (CC2420ReceiveP$rxFrameLength + 1 > CC2420ReceiveP$m_bytes_left) {

          CC2420ReceiveP$flush();
        }
      else {
          if (!CC2420ReceiveP$FIFO$get() && !CC2420ReceiveP$FIFOP$get()) {
              CC2420ReceiveP$m_bytes_left -= CC2420ReceiveP$rxFrameLength + 1;
            }

          if (CC2420ReceiveP$rxFrameLength <= MAC_PACKET_SIZE) {
              if (CC2420ReceiveP$rxFrameLength > 0) {
                  if (CC2420ReceiveP$rxFrameLength > CC2420ReceiveP$SACK_HEADER_LENGTH) {

                      CC2420ReceiveP$RXFIFO$continueRead(buf + 1, CC2420ReceiveP$SACK_HEADER_LENGTH);
                    }
                  else {

                      CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_PAYLOAD;
                      CC2420ReceiveP$RXFIFO$continueRead(buf + 1, CC2420ReceiveP$rxFrameLength);
                    }
                }
              else {
                  /* atomic removed: atomic calls only */
                  CC2420ReceiveP$receivingPacket = FALSE;
                  CC2420ReceiveP$CSN$set();
                  CC2420ReceiveP$SpiResource$release();
                  CC2420ReceiveP$waitForNextPacket();
                }
            }
          else {

              CC2420ReceiveP$flush();
            }
        }
      break;

      case CC2420ReceiveP$S_RX_FCF: 
        CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_PAYLOAD;










      if (CC2420ReceiveP$CC2420Config$isAutoAckEnabled() && !CC2420ReceiveP$CC2420Config$isHwAutoAckDefault()) {



          if (((__nesc_ntoh_leuint16(
#line 255
          header->fcf.data) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && (__nesc_ntoh_leuint16(header->dest.data) == CC2420ReceiveP$CC2420Config$getShortAddr()
           || __nesc_ntoh_leuint16(header->dest.data) == AM_BROADCAST_ADDR)
           && ((__nesc_ntoh_leuint16(header->fcf.data) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {

              CC2420ReceiveP$CSN$set();
              CC2420ReceiveP$CSN$clr();
              CC2420ReceiveP$SACK$strobe();
              CC2420ReceiveP$CSN$set();
              CC2420ReceiveP$CSN$clr();
              CC2420ReceiveP$RXFIFO$beginRead(buf + 1 + CC2420ReceiveP$SACK_HEADER_LENGTH, 
              CC2420ReceiveP$rxFrameLength - CC2420ReceiveP$SACK_HEADER_LENGTH);
              return;
            }
        }


      CC2420ReceiveP$RXFIFO$continueRead(buf + 1 + CC2420ReceiveP$SACK_HEADER_LENGTH, 
      CC2420ReceiveP$rxFrameLength - CC2420ReceiveP$SACK_HEADER_LENGTH);
      break;

      case CC2420ReceiveP$S_RX_PAYLOAD: 
        CC2420ReceiveP$CSN$set();

      if (!CC2420ReceiveP$m_missed_packets) {

          CC2420ReceiveP$SpiResource$release();
        }

      if (CC2420ReceiveP$m_timestamp_size) {
          if (CC2420ReceiveP$rxFrameLength > 10) {
              CC2420ReceiveP$PacketTimeStamp$set(CC2420ReceiveP$m_p_rx_buf, CC2420ReceiveP$m_timestamp_queue[CC2420ReceiveP$m_timestamp_head]);
              CC2420ReceiveP$m_timestamp_head = (CC2420ReceiveP$m_timestamp_head + 1) % CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE;
              CC2420ReceiveP$m_timestamp_size--;
            }
        }
      else 
#line 290
        {
          CC2420ReceiveP$PacketTimeStamp$clear(CC2420ReceiveP$m_p_rx_buf);
        }



      if (buf[CC2420ReceiveP$rxFrameLength] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16(header->fcf.data) >> IEEE154_FCF_FRAME_TYPE) & 7;

#line 298
          CC2420ReceiveP$CC2420Receive$receive(type, CC2420ReceiveP$m_p_rx_buf);
          if (type == IEEE154_TYPE_DATA) {
              CC2420ReceiveP$receiveDone_task$postTask();
              return;
            }
        }

      CC2420ReceiveP$waitForNextPacket();
      break;

      default: /* atomic removed: atomic calls only */
        CC2420ReceiveP$receivingPacket = FALSE;
      CC2420ReceiveP$CSN$set();
      CC2420ReceiveP$SpiResource$release();
      break;
    }
}

# 370 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 370
{
}

# 71 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP$Fifo$readDone(uint8_t arg_0x2adc4d11f328, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x2adc4d11f328) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP$TXFIFO$readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP$RXFIFO$readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP$Fifo$default$readDone(arg_0x2adc4d11f328, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SFLUSHRX);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 102 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP$ChipSpiResource$attemptRelease(void )
#line 102
{
  return CC2420SpiP$attemptRelease();
}

# 39 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP$ChipSpiResource$attemptRelease(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420SpiP$ChipSpiResource$attemptRelease();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get(void ){
#line 53
  unsigned long __nesc_result;
#line 53

#line 53
  __nesc_result = /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 75 "/opt/tinyos-2.1.0/tos/lib/timer/TransformAlarmC.nc"
static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void )
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get();
}

#line 146
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(), dt);
}

# 55 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type dt){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(dt);
#line 55
}
#line 55
# 250 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(am_id_t id, 
message_t *msg)
#line 251
{
}

# 81 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP$RadioBackoff$requestInitialBackoff(am_id_t arg_0x2adc4ca79780, message_t * msg){
#line 81
    CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(arg_0x2adc4ca79780, msg);
#line 81
}
#line 81
# 197 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(message_t *msg)
#line 197
{
  CC2420ActiveMessageP$RadioBackoff$requestInitialBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.data), msg);
}

# 81 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$RadioBackoff$requestInitialBackoff(message_t * msg){
#line 81
  CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(msg);
#line 81
}
#line 81
# 78 "/opt/tinyos-2.1.0/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC$Random$rand16(void )
#line 78
{
  return (uint16_t )RandomMlcgC$Random$rand32();
}

# 41 "/opt/tinyos-2.1.0/tos/interfaces/Random.nc"
inline static uint16_t CC2420CsmaP$Random$rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 223 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t backoffTime)
#line 223
{
  CC2420TransmitP$myInitialBackoff = backoffTime + 1;
}

# 60 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$SubBackoff$setInitialBackoff(uint16_t backoffTime){
#line 60
  CC2420TransmitP$RadioBackoff$setInitialBackoff(backoffTime);
#line 60
}
#line 60
# 217 "/opt/tinyos-2.1.0/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *msg)
#line 217
{
  CC2420CsmaP$SubBackoff$setInitialBackoff(CC2420CsmaP$Random$rand16()
   % (0x1F * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP$RadioBackoff$requestInitialBackoff(msg);
}

# 81 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP$RadioBackoff$requestInitialBackoff(message_t * msg){
#line 81
  CC2420CsmaP$SubBackoff$requestInitialBackoff(msg);
#line 81
}
#line 81
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP$SpiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP$Resource$release(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 637 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$releaseSpiResource(void )
#line 637
{
  CC2420TransmitP$SpiResource$release();
  return SUCCESS;
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP$sendDone_task$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$sendDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 199 "/opt/tinyos-2.1.0/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err)
#line 199
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 200
    CC2420CsmaP$sendErr = err;
#line 200
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP$sendDone_task$postTask();
}

# 73 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static void CC2420TransmitP$Send$sendDone(message_t * p_msg, error_t error){
#line 73
  CC2420CsmaP$CC2420Transmit$sendDone(p_msg, error);
#line 73
}
#line 73
# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$CSN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP$SFLUSHTX$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SFLUSHTX);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 30 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$CSN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 419 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 420
{

  CC2420TransmitP$CSN$set();
  if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
      /* atomic removed: atomic calls only */
#line 424
      {
        CC2420TransmitP$CSN$clr();
        CC2420TransmitP$SFLUSHTX$strobe();
        CC2420TransmitP$CSN$set();
      }
      CC2420TransmitP$releaseSpiResource();
      CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
      CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, ECANCEL);
    }
  else {
#line 433
    if (!CC2420TransmitP$m_cca) {
        /* atomic removed: atomic calls only */
#line 434
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_BEGIN_TRANSMIT;
        }
        CC2420TransmitP$attemptSend();
      }
    else {
        CC2420TransmitP$releaseSpiResource();
        /* atomic removed: atomic calls only */
#line 441
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_SAMPLE_CCA;
        }

        CC2420TransmitP$RadioBackoff$requestInitialBackoff(CC2420TransmitP$m_msg);
        CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$myInitialBackoff);
      }
    }
}

# 318 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 318
{
}

# 373 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 373
{
}

# 91 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP$Fifo$writeDone(uint8_t arg_0x2adc4d11f328, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x2adc4d11f328) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP$TXFIFO$writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP$RXFIFO$writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP$Fifo$default$writeDone(arg_0x2adc4d11f328, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP$STXONCCA$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_STXONCCA);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420TransmitP$STXON$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_STXON);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420TransmitP$SNOP$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SNOP);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 254 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(am_id_t id, 
message_t *msg)
#line 255
{
}

# 88 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP$RadioBackoff$requestCongestionBackoff(am_id_t arg_0x2adc4ca79780, message_t * msg){
#line 88
    CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(arg_0x2adc4ca79780, msg);
#line 88
}
#line 88
# 202 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(message_t *msg)
#line 202
{
  CC2420ActiveMessageP$RadioBackoff$requestCongestionBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.data), msg);
}

# 88 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$RadioBackoff$requestCongestionBackoff(message_t * msg){
#line 88
  CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(msg);
#line 88
}
#line 88
# 231 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t backoffTime)
#line 231
{
  CC2420TransmitP$myCongestionBackoff = backoffTime + 1;
}

# 66 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$SubBackoff$setCongestionBackoff(uint16_t backoffTime){
#line 66
  CC2420TransmitP$RadioBackoff$setCongestionBackoff(backoffTime);
#line 66
}
#line 66
# 224 "/opt/tinyos-2.1.0/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *msg)
#line 224
{
  CC2420CsmaP$SubBackoff$setCongestionBackoff(CC2420CsmaP$Random$rand16()
   % (0x7 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP$RadioBackoff$requestCongestionBackoff(msg);
}

# 88 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP$RadioBackoff$requestCongestionBackoff(message_t * msg){
#line 88
  CC2420CsmaP$SubBackoff$requestCongestionBackoff(msg);
#line 88
}
#line 88
# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P$Timer$get(void )
#line 49
{
#line 49
  return * (volatile uint16_t *)(0x2C + 0x20);
}

# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer1P$Timer$get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get();
}

# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 44 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4273 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 144 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline bool HplAtm128Timer1P$Timer$test(void )
#line 144
{
  return HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag().bits.tov1;
}

# 78 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = HplAtm128Timer1P$Timer$test();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test();
}

# 60 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
inline static bool /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 133 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareA$start(void )
#line 133
{
#line 133
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 4;
}

# 56 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void ){
#line 56
  HplAtm128Timer1P$CompareA$start();
#line 56
}
#line 56
# 127 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareA$reset(void )
#line 127
{
#line 127
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 4;
}

# 53 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void ){
#line 53
  HplAtm128Timer1P$CompareA$reset();
#line 53
}
#line 53
# 183 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareA$set(uint16_t t)
#line 183
{
#line 183
  * (volatile uint16_t *)(0x2A + 0x20) = t;
}

# 45 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type t){
#line 45
  HplAtm128Timer1P$CompareA$set(t);
#line 45
}
#line 45
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer1P$Timer$get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 74 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size dt)
#line 74
{
  /* atomic removed: atomic calls only */






  {
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size now;
#line 83
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size elapsed;
#line 83
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size expires;

    ;


    now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get();
    elapsed = now + 3 - t0;
    if (elapsed >= dt) {
      expires = now + 3;
      }
    else {
#line 93
      expires = t0 + dt;
      }



    if (expires == 0) {
      expires = 1;
      }



    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(expires - 1);
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start();
  }
}

# 92 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type dt){
#line 92
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(t0, dt);
#line 92
}
#line 92
# 55 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP$RXCTRL1$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_RXCTRL1, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
inline static cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_IOCFG0, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP$SXOSCON$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SXOSCON);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t HplCC2420InterruptsP$CCATask$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(HplCC2420InterruptsP$CCATask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 45 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )48U & (1 << 6)) != 0;
}

# 32 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static bool HplCC2420InterruptsP$CC_CCA$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 89 "/opt/tinyos-2.1.0/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void )
#line 89
{
  /* atomic removed: atomic calls only */
#line 90
  HplCC2420InterruptsP$ccaWaitForState = TRUE;
  /* atomic removed: atomic calls only */
#line 91
  HplCC2420InterruptsP$ccaCheckDisabled = FALSE;
  HplCC2420InterruptsP$ccaLastState = HplCC2420InterruptsP$CC_CCA$get();
  HplCC2420InterruptsP$CCATask$postTask();
  return SUCCESS;
}

# 42 "/opt/tinyos-2.1.0/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplCC2420InterruptsP$CCA$enableRisingEdge();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 55 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_IOCFG1, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 207 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Power$startOscillator(void )
#line 207
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_VREG_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 210
            FAIL;

            {
#line 210
              __nesc_atomic_end(__nesc_atomic); 
#line 210
              return __nesc_temp;
            }
          }
        }
#line 213
      CC2420ControlP$m_state = CC2420ControlP$S_XOSC_STARTING;
      CC2420ControlP$IOCFG1$write(CC2420_SFDMUX_XOSC16M_STABLE << 
      CC2420_IOCFG1_CCAMUX);

      CC2420ControlP$InterruptCCA$enableRisingEdge();
      CC2420ControlP$SXOSCON$strobe();

      CC2420ControlP$IOCFG0$write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
      127 << CC2420_IOCFG0_FIFOP_THR));

      CC2420ControlP$writeFsctrl();
      CC2420ControlP$writeMdmctrl0();

      CC2420ControlP$RXCTRL1$write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
      1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
      1 << CC2420_RXCTRL1_HIGH_HGM)) | (
      1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
      1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
      1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
      2 << CC2420_RXCTRL1_RXMIX_CURRENT));
    }
#line 233
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 71 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP$CC2420Power$startOscillator(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP$CC2420Power$startOscillator();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 208 "/opt/tinyos-2.1.0/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$Resource$granted(void )
#line 208
{
  CC2420CsmaP$CC2420Power$startOscillator();
}

# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static void CC2420ControlP$Resource$granted(void ){
#line 92
  CC2420CsmaP$Resource$granted();
#line 92
}
#line 92
# 30 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$CSN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 390 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$SpiResource$granted(void )
#line 390
{
  CC2420ControlP$CSN$clr();
  CC2420ControlP$Resource$granted();
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ControlP$syncDone$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420ControlP$syncDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$SyncResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP$Resource$release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$CSN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 45 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP$SRXON$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SRXON);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420ControlP$SRFOFF$strobe(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = CC2420SpiP$Strobe$strobe(CC2420_SRFOFF);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 376 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$SyncResource$granted(void )
#line 376
{
  CC2420ControlP$CSN$clr();
  CC2420ControlP$SRFOFF$strobe();
  CC2420ControlP$writeFsctrl();
  CC2420ControlP$writeMdmctrl0();
  CC2420ControlP$writeId();
  CC2420ControlP$CSN$set();
  CC2420ControlP$CSN$clr();
  CC2420ControlP$SRXON$strobe();
  CC2420ControlP$CSN$set();
  CC2420ControlP$SyncResource$release();
  CC2420ControlP$syncDone$postTask();
}

#line 509
static inline void CC2420ControlP$ReadRssi$default$readDone(error_t error, uint16_t data)
#line 509
{
}

# 63 "/opt/tinyos-2.1.0/tos/interfaces/Read.nc"
inline static void CC2420ControlP$ReadRssi$readDone(error_t result, CC2420ControlP$ReadRssi$val_t val){
#line 63
  CC2420ControlP$ReadRssi$default$readDone(result, val);
#line 63
}
#line 63
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$RssiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP$Resource$release(/*CC2420ControlC.RssiResource*/CC2420SpiC$2$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 287 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP$Reg$read(uint8_t addr, uint16_t *data)
#line 287
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 291
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 293
            status;

            {
#line 293
              __nesc_atomic_end(__nesc_atomic); 
#line 293
              return __nesc_temp;
            }
          }
        }
    }
#line 297
    __nesc_atomic_end(__nesc_atomic); }
#line 297
  status = CC2420SpiP$SpiByte$write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP$SpiByte$write(0) << 8;
  *data |= CC2420SpiP$SpiByte$write(0);

  return status;
}

# 47 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP$RSSI$read(uint16_t *data){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = CC2420SpiP$Reg$read(CC2420_RSSI, data);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 395 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$RssiResource$granted(void )
#line 395
{
  uint16_t data;

#line 397
  CC2420ControlP$CSN$clr();
  CC2420ControlP$RSSI$read(&data);
  CC2420ControlP$CSN$set();

  CC2420ControlP$RssiResource$release();
  data += 0x7f;
  data &= 0x00ff;
  CC2420ControlP$ReadRssi$readDone(SUCCESS, data);
}

# 381 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$SpiResource$granted(void )
#line 381
{
  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 384
    {
      cur_state = CC2420TransmitP$m_state;
    }
#line 386
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP$S_LOAD: 
        CC2420TransmitP$loadTXFIFO();
      break;

      case CC2420TransmitP$S_BEGIN_TRANSMIT: 
        CC2420TransmitP$attemptSend();
      break;

      case CC2420TransmitP$S_CANCEL: 
        CC2420TransmitP$CSN$clr();
      CC2420TransmitP$SFLUSHTX$strobe();
      CC2420TransmitP$CSN$set();
      CC2420TransmitP$releaseSpiResource();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 402
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
        }
#line 404
        __nesc_atomic_end(__nesc_atomic); }
      CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, ECANCEL);
      break;

      default: 
        CC2420TransmitP$releaseSpiResource();
      break;
    }
}

# 186 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$SpiResource$granted(void )
#line 186
{
  CC2420ReceiveP$receive();
}

# 367 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$Resource$default$granted(uint8_t id)
#line 367
{
}

# 92 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static void CC2420SpiP$Resource$granted(uint8_t arg_0x2adc4d121158){
#line 92
  switch (arg_0x2adc4d121158) {
#line 92
    case /*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID:
#line 92
      CC2420ControlP$SpiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID:
#line 92
      CC2420ControlP$SyncResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ControlC.RssiResource*/CC2420SpiC$2$CLIENT_ID:
#line 92
      CC2420ControlP$RssiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID:
#line 92
      CC2420TransmitP$SpiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID:
#line 92
      CC2420ReceiveP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      CC2420SpiP$Resource$default$granted(arg_0x2adc4d121158);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 358 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$grant$runTask(void )
#line 358
{
  uint8_t holder;

#line 360
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
    {
      holder = CC2420SpiP$m_holder;
    }
#line 362
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP$Resource$granted(holder);
}

# 55 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_FSCTRL, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
inline static cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP$Reg$write(CC2420_MDMCTRL0, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 63 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP$PANID$write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP$Ram$write(CC2420_RAM_PANID, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP$startDone_task$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$startDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 212 "/opt/tinyos-2.1.0/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$CC2420Power$startOscillatorDone(void )
#line 212
{
  CC2420CsmaP$startDone_task$postTask();
}

# 76 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP$CC2420Power$startOscillatorDone(void ){
#line 76
  CC2420CsmaP$CC2420Power$startOscillatorDone();
#line 76
}
#line 76
# 105 "/opt/tinyos-2.1.0/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP$CCA$disable(void )
#line 105
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 106
    HplCC2420InterruptsP$ccaCheckDisabled = TRUE;
#line 106
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 50 "/opt/tinyos-2.1.0/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP$InterruptCCA$disable(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = HplCC2420InterruptsP$CCA$disable();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 418 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$InterruptCCA$fired(void )
#line 418
{
  CC2420ControlP$m_state = CC2420ControlP$S_XOSC_STARTED;
  CC2420ControlP$InterruptCCA$disable();
  CC2420ControlP$IOCFG1$write(0);
  CC2420ControlP$writeId();
  CC2420ControlP$CSN$set();
  CC2420ControlP$CSN$clr();
  CC2420ControlP$CC2420Power$startOscillatorDone();
}

# 57 "/opt/tinyos-2.1.0/tos/interfaces/GpioInterrupt.nc"
inline static void HplCC2420InterruptsP$CCA$fired(void ){
#line 57
  CC2420ControlP$InterruptCCA$fired();
#line 57
}
#line 57
# 69 "/opt/tinyos-2.1.0/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline void HplCC2420InterruptsP$CCATask$runTask(void )
#line 69
{
  uint8_t CCAState;

#line 71
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 71
    {
      if (HplCC2420InterruptsP$ccaCheckDisabled) {
          {
#line 73
            __nesc_atomic_end(__nesc_atomic); 
#line 73
            return;
          }
        }
    }
#line 76
    __nesc_atomic_end(__nesc_atomic); }

  CCAState = HplCC2420InterruptsP$CC_CCA$get();
  if (HplCC2420InterruptsP$ccaLastState != HplCC2420InterruptsP$ccaWaitForState && CCAState == HplCC2420InterruptsP$ccaWaitForState) {
      HplCC2420InterruptsP$CCA$fired();
    }



  HplCC2420InterruptsP$ccaLastState = CCAState;
  HplCC2420InterruptsP$CCATask$postTask();
}

# 191 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error)
#line 191
{
}

# 347 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$CC2420Config$syncDone(error_t error)
#line 347
{
}

# 53 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void CC2420ControlP$CC2420Config$syncDone(error_t error){
#line 53
  CC2420ReceiveP$CC2420Config$syncDone(error);
#line 53
  CC2420ActiveMessageP$CC2420Config$syncDone(error);
#line 53
}
#line 53
# 446 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$syncDone$runTask(void )
#line 446
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 447
    CC2420ControlP$m_sync_busy = FALSE;
#line 447
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP$CC2420Config$syncDone(SUCCESS);
}

# 78 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$SyncResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP$Resource$request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 300 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Config$sync(void )
#line 300
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 301
    {
      if (CC2420ControlP$m_sync_busy) {
          {
            unsigned char __nesc_temp = 
#line 303
            FAIL;

            {
#line 303
              __nesc_atomic_end(__nesc_atomic); 
#line 303
              return __nesc_temp;
            }
          }
        }
#line 306
      CC2420ControlP$m_sync_busy = TRUE;
      if (CC2420ControlP$m_state == CC2420ControlP$S_XOSC_STARTED) {
          CC2420ControlP$SyncResource$request();
        }
      else 
#line 309
        {
          CC2420ControlP$syncDone$postTask();
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 442
static inline void CC2420ControlP$sync$runTask(void )
#line 442
{
  CC2420ControlP$CC2420Config$sync();
}

# 181 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/opt/tinyos-2.1.0/tos/interfaces/AMSend.nc"
inline static void CC2420ActiveMessageP$AMSend$sendDone(am_id_t arg_0x2adc4ca6e060, message_t * msg, error_t error){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x2adc4ca6e060, msg, error);
#line 99
}
#line 99
# 165 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result)
#line 165
{
  CC2420ActiveMessageP$AMSend$sendDone(CC2420ActiveMessageP$AMPacket$type(msg), msg, result);
}

# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static void UniqueSendP$Send$sendDone(message_t * msg, error_t error){
#line 89
  CC2420ActiveMessageP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 104 "/opt/tinyos-2.1.0/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void UniqueSendP$SubSend$sendDone(message_t *msg, error_t error)
#line 104
{
  UniqueSendP$State$toIdle();
  UniqueSendP$Send$sendDone(msg, error);
}

# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP$Send$sendDone(message_t * msg, error_t error){
#line 89
  UniqueSendP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 79 "/opt/tinyos-2.1.0/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP$SubSend$sendDone(message_t *msg, error_t error)
#line 79
{
  CC2420TinyosNetworkP$Send$sendDone(msg, error);
}

# 89 "/opt/tinyos-2.1.0/tos/interfaces/Send.nc"
inline static void CC2420CsmaP$Send$sendDone(message_t * msg, error_t error){
#line 89
  CC2420TinyosNetworkP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP$stopDone_task$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$stopDone_task);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 6;
}

# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$RSTN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set();
#line 29
}
#line 29
# 47 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 5);
}

# 30 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$VREN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr();
#line 30
}
#line 30
# 47 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 6);
}

# 30 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$RSTN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr();
#line 30
}
#line 30
# 199 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Power$stopVReg(void )
#line 199
{
  CC2420ControlP$m_state = CC2420ControlP$S_VREG_STOPPED;
  CC2420ControlP$RSTN$clr();
  CC2420ControlP$VREN$clr();
  CC2420ControlP$RSTN$set();
  return SUCCESS;
}

# 63 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP$CC2420Power$stopVReg(void ){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420ControlP$CC2420Power$stopVReg();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 43 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void )
#line 43
{
#line 43
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 6);
}

# 40 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void ){
#line 40
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable();
#line 40
}
#line 40
# 33 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable(void )
#line 33
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
  return SUCCESS;
}

# 50 "/opt/tinyos-2.1.0/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP$InterruptFIFOP$disable(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 134 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP$StdControl$stop(void )
#line 134
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    {
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_STOPPED;
      CC2420ReceiveP$reset_state();
      CC2420ReceiveP$CSN$set();
      CC2420ReceiveP$InterruptFIFOP$disable();
    }
#line 140
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 138 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Capture$stop(void )
#line 138
{
#line 138
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 5);
}

# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop(void ){
#line 61
  HplAtm128Timer1P$Capture$stop();
#line 61
}
#line 61
# 60 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable(void )
#line 60
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop();
}

# 55 "/opt/tinyos-2.1.0/tos/interfaces/GpioCapture.nc"
inline static void CC2420TransmitP$CaptureSFD$disable(void ){
#line 55
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable();
#line 55
}
#line 55
# 159 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$StdControl$stop(void )
#line 159
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 160
    {
      CC2420TransmitP$m_state = CC2420TransmitP$S_STOPPED;
      CC2420TransmitP$BackoffTimer$stop();
      CC2420TransmitP$CaptureSFD$disable();
      CC2420TransmitP$SpiResource$release();
      CC2420TransmitP$CSN$set();
    }
#line 166
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP$SubControl$stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = CC2420TransmitP$StdControl$stop();
#line 84
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP$StdControl$stop());
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 269 "/opt/tinyos-2.1.0/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$shutdown(void )
#line 269
{
  CC2420CsmaP$SubControl$stop();
  CC2420CsmaP$CC2420Power$stopVReg();
  CC2420CsmaP$stopDone_task$postTask();
}

#line 238
static inline void CC2420CsmaP$sendDone_task$runTask(void )
#line 238
{
  error_t packetErr;

#line 240
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 240
    packetErr = CC2420CsmaP$sendErr;
#line 240
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STOPPING)) {
      CC2420CsmaP$shutdown();
    }
  else {
      CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STARTED);
    }

  CC2420CsmaP$Send$sendDone(CC2420CsmaP$m_msg, packetErr);
}

# 23 "HiddenMoteC.nc"
static inline void HiddenMoteC$RadioControl$stopDone(error_t result)
#line 23
{
}

# 117 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP$SplitControl$stopDone(error_t error){
#line 117
  HiddenMoteC$RadioControl$stopDone(error);
#line 117
}
#line 117
# 259 "/opt/tinyos-2.1.0/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$stopDone_task$runTask(void )
#line 259
{
  CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STOPPED);
  CC2420CsmaP$SplitControl$stopDone(SUCCESS);
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 133 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 53 "/opt/tinyos-2.1.0/tos/lib/timer/Timer.nc"
inline static void HiddenMoteC$SendTimer$startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(1U, dt);
#line 53
}
#line 53
# 19 "HiddenMoteC.nc"
static inline void HiddenMoteC$RadioControl$startDone(error_t result)
#line 19
{
  HiddenMoteC$SendTimer$startPeriodic(SEND_INTERVAL_MS);
}

# 92 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP$SplitControl$startDone(error_t error){
#line 92
  HiddenMoteC$RadioControl$startDone(error);
#line 92
}
#line 92
# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$SpiResource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420SpiP$Resource$release(/*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 179 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$Resource$release(void )
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      CC2420ControlP$CSN$set();
      {
        unsigned char __nesc_temp = 
#line 182
        CC2420ControlP$SpiResource$release();

        {
#line 182
          __nesc_atomic_end(__nesc_atomic); 
#line 182
          return __nesc_temp;
        }
      }
    }
#line 185
    __nesc_atomic_end(__nesc_atomic); }
}

# 110 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP$Resource$release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420ControlP$Resource$release();
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 249 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Power$rxOn(void )
#line 249
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 250
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 252
            FAIL;

            {
#line 252
              __nesc_atomic_end(__nesc_atomic); 
#line 252
              return __nesc_temp;
            }
          }
        }
#line 254
      CC2420ControlP$SRXON$strobe();
    }
#line 255
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP$CC2420Power$rxOn(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = CC2420ControlP$CC2420Power$rxOn();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 42 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void )
#line 42
{
#line 42
  * (volatile uint8_t *)(0x39 + 0x20) |= 1 << 6;
}

# 35 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void ){
#line 35
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable();
#line 35
}
#line 35
# 47 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool low_to_high)
#line 47
{
  * (volatile uint8_t * )90U |= 1 << 5;

  if (low_to_high) {
    * (volatile uint8_t * )90U |= 1 << 4;
    }
  else {
#line 53
    * (volatile uint8_t * )90U &= ~(1 << 4);
    }
}

# 59 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool low_to_high){
#line 59
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(low_to_high);
#line 59
}
#line 59
# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void )
#line 41
{
#line 41
  * (volatile uint8_t *)(0x38 + 0x20) = 1 << 6;
}

# 45 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void ){
#line 45
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear();
#line 45
}
#line 45
# 15 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(bool rising)
#line 15
{
  /* atomic removed: atomic calls only */
#line 16
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void )
#line 29
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(FALSE);
}

# 43 "/opt/tinyos-2.1.0/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 124 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP$StdControl$start(void )
#line 124
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 125
    {
      CC2420ReceiveP$reset_state();
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_STARTED;
      CC2420ReceiveP$receivingPacket = FALSE;
      CC2420ReceiveP$InterruptFIFOP$enableFallingEdge();
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void )
#line 52
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(TRUE);
}

# 42 "/opt/tinyos-2.1.0/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 148 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$StdControl$start(void )
#line 148
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 149
    {
      CC2420TransmitP$CaptureSFD$captureRisingEdge();
      CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
      CC2420TransmitP$m_receiving = FALSE;
      CC2420TransmitP$abortSpiRelease = FALSE;
      CC2420TransmitP$m_tx_power = 0;
    }
#line 155
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.0/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP$SubControl$start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = CC2420TransmitP$StdControl$start();
#line 74
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP$StdControl$start());
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 251 "/opt/tinyos-2.1.0/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$startDone_task$runTask(void )
#line 251
{
  CC2420CsmaP$SubControl$start();
  CC2420CsmaP$CC2420Power$rxOn();
  CC2420CsmaP$Resource$release();
  CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STARTED);
  CC2420CsmaP$SplitControl$startDone(SUCCESS);
}

# 122 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Capture$setEdge(bool up)
#line 122
{
#line 122
  if (up) {
#line 122
    * (volatile uint8_t *)(0x2E + 0x20) |= 1 << 6;
    }
  else {
#line 122
    * (volatile uint8_t *)(0x2E + 0x20) &= ~(1 << 6);
    }
}

# 79 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(bool up){
#line 79
  HplAtm128Timer1P$Capture$setEdge(up);
#line 79
}
#line 79
# 132 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Capture$start(void )
#line 132
{
#line 132
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 5;
}

# 58 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start(void ){
#line 58
  HplAtm128Timer1P$Capture$start();
#line 58
}
#line 58
# 82 "/opt/tinyos-2.1.0/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void )
#line 82
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 84
  myGroup = ActiveMessageAddressC$group;
  return myGroup;
}

# 55 "/opt/tinyos-2.1.0/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t CC2420ControlP$ActiveMessageAddress$amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC$ActiveMessageAddress$amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
#line 50
inline static am_addr_t CC2420ControlP$ActiveMessageAddress$amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 5;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$VREN$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 6;
}

# 35 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$RSTN$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput();
#line 35
}
#line 35
inline static void CC2420ControlP$CSN$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 121 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$Init$init(void )
#line 121
{
  CC2420ControlP$CSN$makeOutput();
  CC2420ControlP$RSTN$makeOutput();
  CC2420ControlP$VREN$makeOutput();

  CC2420ControlP$m_short_addr = CC2420ControlP$ActiveMessageAddress$amAddress();
  CC2420ControlP$m_pan = CC2420ControlP$ActiveMessageAddress$amGroup();
  CC2420ControlP$m_tx_power = 31;
  CC2420ControlP$m_channel = 26;





  CC2420ControlP$addressRecognition = TRUE;





  CC2420ControlP$hwAddressRecognition = FALSE;






  CC2420ControlP$autoAckEnabled = TRUE;






  CC2420ControlP$hwAutoAckDefault = FALSE;



  return SUCCESS;
}

# 81 "/opt/tinyos-2.1.0/tos/system/StateImplP.nc"
static inline error_t StateImplP$Init$init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 4U; i++) {
      StateImplP$state[i] = StateImplP$S_IDLE;
    }
  return SUCCESS;
}

# 45 "/opt/tinyos-2.1.0/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void )
#line 45
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ);
  return SUCCESS;
}

# 22 "/opt/tinyos-2.1.0/tos/system/NoInitC.nc"
static inline error_t NoInitC$Init$init(void )
#line 22
{
  return SUCCESS;
}

# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )49U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$SFD$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput();
#line 33
}
#line 33


inline static void CC2420TransmitP$CSN$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )49U &= ~(1 << 6);
}

# 33 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$CCA$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput();
#line 33
}
#line 33
# 140 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$Init$init(void )
#line 140
{
  CC2420TransmitP$CCA$makeInput();
  CC2420TransmitP$CSN$makeOutput();
  CC2420TransmitP$SFD$makeInput();
  return SUCCESS;
}

# 118 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP$Init$init(void )
#line 118
{
  CC2420ReceiveP$m_p_rx_buf = &CC2420ReceiveP$m_rx_buf;
  return SUCCESS;
}

# 122 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$start(void )
#line 122
{
#line 122
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 56 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void ){
#line 56
  HplAtm128Timer0AsyncP$Compare$start();
#line 56
}
#line 56
# 76 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t x)
#line 76
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 37 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control){
#line 37
  HplAtm128Timer0AsyncP$TimerCtrl$setControl(control);
#line 37
}
#line 37
# 198 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void )
#line 198
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
}

# 32 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  return SUCCESS;
}

# 44 "/opt/tinyos-2.1.0/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC$Init$init(void )
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgC$seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 41 "/opt/tinyos-2.1.0/tos/interfaces/Random.nc"
inline static uint16_t UniqueSendP$Random$rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 62 "/opt/tinyos-2.1.0/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP$Init$init(void )
#line 62
{
  UniqueSendP$localSendId = UniqueSendP$Random$rand16();
  return SUCCESS;
}

# 71 "/opt/tinyos-2.1.0/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline error_t UniqueReceiveP$Init$init(void )
#line 71
{
  int i;

#line 73
  for (i = 0; i < 4; i++) {
      UniqueReceiveP$receivedMessages[i].source = (am_addr_t )0xFFFF;
      UniqueReceiveP$receivedMessages[i].dsn = 0;
    }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.0/tos/interfaces/Init.nc"
inline static error_t RealMainP$SoftwareInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = UniqueReceiveP$Init$init();
#line 51
  __nesc_result = ecombine(__nesc_result, UniqueSendP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, RandomMlcgC$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC2420TransmitP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, NoInitC$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, StateImplP$Init$init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC2420ControlP$Init$init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 55 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type dt){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(dt);
#line 55
}
#line 55
# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 5;
}

# 29 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$VREN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set();
#line 29
}
#line 29
# 187 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Power$startVReg(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 190
            FAIL;

            {
#line 190
              __nesc_atomic_end(__nesc_atomic); 
#line 190
              return __nesc_temp;
            }
          }
        }
#line 192
      CC2420ControlP$m_state = CC2420ControlP$S_VREG_STARTING;
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP$VREN$set();
  CC2420ControlP$StartupTimer$start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP$CC2420Power$startVReg(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420ControlP$CC2420Power$startVReg();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 45 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
inline static error_t CC2420CsmaP$SplitControlState$requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP$State$requestState(1U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 82 "/opt/tinyos-2.1.0/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP$SplitControl$start(void )
#line 82
{
  if (CC2420CsmaP$SplitControlState$requestState(CC2420CsmaP$S_STARTING) == SUCCESS) {
      CC2420CsmaP$CC2420Power$startVReg();
      return SUCCESS;
    }
  else {
#line 87
    if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTED)) {
        return EALREADY;
      }
    else {
#line 90
      if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTING)) {
          return SUCCESS;
        }
      }
    }
#line 94
  return EBUSY;
}

# 83 "/opt/tinyos-2.1.0/tos/interfaces/SplitControl.nc"
inline static error_t HiddenMoteC$RadioControl$start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = CC2420CsmaP$SplitControl$start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 15 "HiddenMoteC.nc"
static inline void HiddenMoteC$Boot$booted(void )
#line 15
{
  HiddenMoteC$RadioControl$start();
}

# 49 "/opt/tinyos-2.1.0/tos/interfaces/Boot.nc"
inline static void RealMainP$Boot$booted(void ){
#line 49
  HiddenMoteC$Boot$booted();
#line 49
}
#line 49
# 155 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void )
#line 155
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 170
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 54 "/opt/tinyos-2.1.0/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = HplAtm128Timer0AsyncP$McuPowerOverride$lowestState();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 66 "/opt/tinyos-2.1.0/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC$getPowerState(void )
#line 66
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 6) | (1 << 7))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 134 "/opt/tinyos-2.1.0/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 134
{
  return m1 < m2 ? m1 : m2;
}

# 97 "/opt/tinyos-2.1.0/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC$McuSleep$sleep(void )
#line 97
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC$getPowerState(), McuSleepC$McuPowerOverride$lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 102
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC$atm128PowerBits[powerState];
#line 102
    uint8_t __result;

#line 102
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 104
   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");}

# 59 "/opt/tinyos-2.1.0/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP$McuSleep$sleep(void ){
#line 59
  McuSleepC$McuSleep$sleep();
#line 59
}
#line 59
# 67 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP$popTask(void )
{
  if (SchedulerBasicP$m_head != SchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SchedulerBasicP$m_head;

#line 72
      SchedulerBasicP$m_head = SchedulerBasicP$m_next[SchedulerBasicP$m_head];
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
        }
      SchedulerBasicP$m_next[id] = SchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP$NO_TASK;
    }
}

#line 138
static inline void SchedulerBasicP$Scheduler$taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP$popTask()) == SchedulerBasicP$NO_TASK) 
            {
              SchedulerBasicP$McuSleep$sleep();
            }
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP$TaskBasic$runTask(nextTask);
    }
}

# 61 "/opt/tinyos-2.1.0/tos/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$taskLoop(void ){
#line 61
  SchedulerBasicP$Scheduler$taskLoop();
#line 61
}
#line 61
# 140 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP$stabiliseTimer0(void )
#line 140
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 47 "/opt/tinyos-2.1.0/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void )
{
}

# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void ){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow();
#line 71
}
#line 71
# 82 "/opt/tinyos-2.1.0/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 82
{
   __asm volatile ("sei");}

# 132 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP$Compare$get(void )
#line 132
{
#line 132
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 39 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = HplAtm128Timer0AsyncP$Compare$get();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 149 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow();
    }
}

# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP$Compare$fired(void ){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired();
#line 49
}
#line 49
# 230 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void )
#line 230
{
}

# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP$Timer$overflow(void ){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 61
}
#line 61
# 78 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$SpiResource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420SpiP$Resource$request(/*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 171 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$Resource$request(void )
#line 171
{
  return CC2420ControlP$SpiResource$request();
}

# 78 "/opt/tinyos-2.1.0/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP$Resource$request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420ControlP$Resource$request();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 204 "/opt/tinyos-2.1.0/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$CC2420Power$startVRegDone(void )
#line 204
{
  CC2420CsmaP$Resource$request();
}

# 56 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP$CC2420Power$startVRegDone(void ){
#line 56
  CC2420CsmaP$CC2420Power$startVRegDone();
#line 56
}
#line 56
# 408 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$StartupTimer$fired(void )
#line 408
{
  if (CC2420ControlP$m_state == CC2420ControlP$S_VREG_STARTING) {
      CC2420ControlP$m_state = CC2420ControlP$S_VREG_STARTED;
      CC2420ControlP$RSTN$clr();
      CC2420ControlP$RSTN$set();
      CC2420ControlP$CC2420Power$startVRegDone();
    }
}

# 32 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP$CCA$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 463 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$BackoffTimer$fired(void )
#line 463
{
  /* atomic removed: atomic calls only */
#line 464
  {
    switch (CC2420TransmitP$m_state) {

        case CC2420TransmitP$S_SAMPLE_CCA: 


          if (CC2420TransmitP$CCA$get()) {
              CC2420TransmitP$m_state = CC2420TransmitP$S_BEGIN_TRANSMIT;
              CC2420TransmitP$BackoffTimer$start(CC2420_TIME_ACK_TURNAROUND);
            }
          else {
              CC2420TransmitP$congestionBackoff();
            }
        break;

        case CC2420TransmitP$S_BEGIN_TRANSMIT: 
          case CC2420TransmitP$S_CANCEL: 
            if (CC2420TransmitP$acquireSpiResource() == SUCCESS) {
                CC2420TransmitP$attemptSend();
              }
        break;

        case CC2420TransmitP$S_ACK_WAIT: 
          CC2420TransmitP$signalDone(SUCCESS);
        break;

        case CC2420TransmitP$S_SFD: 


          CC2420TransmitP$SFLUSHTX$strobe();
        CC2420TransmitP$CaptureSFD$captureRisingEdge();
        CC2420TransmitP$releaseSpiResource();
        CC2420TransmitP$signalDone(ERETRY);
        break;

        default: 
          break;
      }
  }
}

# 67 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired(void ){
#line 67
  CC2420TransmitP$BackoffTimer$fired();
#line 67
  CC2420ControlP$StartupTimer$fired();
#line 67
}
#line 67
# 151 "/opt/tinyos-2.1.0/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt == 0) 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired();
        }
      else 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm();
        }
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$fired(void ){
#line 67
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired();
#line 67
}
#line 67
# 110 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void )
#line 110
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
  ;
  __nesc_enable_interrupt();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$fired();
}

# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P$CompareA$fired(void ){
#line 49
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired();
#line 49
}
#line 49
# 198 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareB$default$fired(void )
#line 198
{
}

# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P$CompareB$fired(void ){
#line 49
  HplAtm128Timer1P$CompareB$default$fired();
#line 49
}
#line 49
# 202 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareC$default$fired(void )
#line 202
{
}

# 49 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P$CompareC$fired(void ){
#line 49
  HplAtm128Timer1P$CompareC$default$fired();
#line 49
}
#line 49
# 294 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 294
{
  const uint8_t *base = source;

#line 296
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 59 "/opt/tinyos-2.1.0/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP$PacketTimeStamp$clear(message_t * msg){
#line 59
  CC2420PacketP$PacketTimeStamp32khz$clear(msg);
#line 59
}
#line 59
# 158 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$CC2420Receive$sfd_dropped(void )
#line 158
{
  if (CC2420ReceiveP$m_timestamp_size) {
      CC2420ReceiveP$m_timestamp_size--;
    }
}

# 55 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP$CC2420Receive$sfd_dropped(void ){
#line 55
  CC2420ReceiveP$CC2420Receive$sfd_dropped();
#line 55
}
#line 55
# 45 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )48U & (1 << 4)) != 0;
}

# 32 "/opt/tinyos-2.1.0/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP$SFD$get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 149 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$CC2420Receive$sfd(uint32_t time)
#line 149
{
  if (CC2420ReceiveP$m_timestamp_size < CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP$m_timestamp_head + CC2420ReceiveP$m_timestamp_size) % 
      CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE;

#line 153
      CC2420ReceiveP$m_timestamp_queue[tail] = time;
      CC2420ReceiveP$m_timestamp_size++;
    }
}

# 49 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP$CC2420Receive$sfd(uint32_t time){
#line 49
  CC2420ReceiveP$CC2420Receive$sfd(time);
#line 49
}
#line 49
# 56 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void )
#line 56
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(FALSE);
}

# 43 "/opt/tinyos-2.1.0/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 67 "/opt/tinyos-2.1.0/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP$PacketTimeStamp$set(message_t * msg, CC2420TransmitP$PacketTimeStamp$size_type value){
#line 67
  CC2420PacketP$PacketTimeStamp32khz$set(msg, value);
#line 67
}
#line 67
# 47 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static uint8_t CC2420TransmitP$PacketTimeSyncOffset$get(message_t * msg){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = CC2420PacketP$PacketTimeSyncOffset$get(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 63 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420TransmitP$TXFIFO_RAM$write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP$Ram$write(CC2420_RAM_TXFIFO, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 158 "/opt/tinyos-2.1.0/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline bool CC2420PacketP$PacketTimeSyncOffset$isSet(message_t *msg)
{
  return __nesc_ntoh_int8(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timesync.data);
}

# 39 "/opt/tinyos-2.1.0/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static bool CC2420TransmitP$PacketTimeSyncOffset$isSet(message_t * msg){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420PacketP$PacketTimeSyncOffset$isSet(msg);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 98 "/opt/tinyos-2.1.0/tos/lib/timer/Alarm.nc"
inline static CC2420TransmitP$BackoffTimer$size_type CC2420TransmitP$BackoffTimer$getNow(void ){
#line 98
  unsigned long __nesc_result;
#line 98

#line 98
  __nesc_result = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 239 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static __inline uint32_t CC2420TransmitP$time16to32(uint16_t time, uint32_t recent_time)
{
  if ((recent_time & 0xFFFF) < time) {
    return ((recent_time - 0x10000UL) & 0xFFFF0000UL) | time;
    }
  else {
#line 244
    return (recent_time & 0xFFFF0000UL) | time;
    }
}

#line 260
static inline void CC2420TransmitP$CaptureSFD$captured(uint16_t time)
#line 260
{
  unsigned char *__nesc_temp44;
#line 261
  uint32_t time32 = CC2420TransmitP$time16to32(time, CC2420TransmitP$BackoffTimer$getNow());

#line 262
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 262
    {
      switch (CC2420TransmitP$m_state) {

          case CC2420TransmitP$S_SFD: 
            CC2420TransmitP$m_state = CC2420TransmitP$S_EFD;
          CC2420TransmitP$sfdHigh = TRUE;
          CC2420TransmitP$CaptureSFD$captureFallingEdge();
          CC2420TransmitP$PacketTimeStamp$set(CC2420TransmitP$m_msg, time32);
          if (CC2420TransmitP$PacketTimeSyncOffset$isSet(CC2420TransmitP$m_msg)) {
              nx_uint8_t *taddr = CC2420TransmitP$m_msg->data + (CC2420TransmitP$PacketTimeSyncOffset$get(CC2420TransmitP$m_msg) - sizeof(cc2420_header_t ));
              timesync_radio_t *timesync = (timesync_radio_t *)taddr;

              (__nesc_temp44 = (*timesync).data, __nesc_hton_uint32(__nesc_temp44, __nesc_ntoh_uint32(__nesc_temp44) - time32));
              CC2420TransmitP$CSN$clr();
              CC2420TransmitP$TXFIFO_RAM$write(CC2420TransmitP$PacketTimeSyncOffset$get(CC2420TransmitP$m_msg), (uint8_t *)timesync, sizeof(timesync_radio_t ));
              CC2420TransmitP$CSN$set();
            }

          if (__nesc_ntoh_leuint16(CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf.data) & (1 << IEEE154_FCF_ACK_REQ)) {

              CC2420TransmitP$abortSpiRelease = TRUE;
            }
          CC2420TransmitP$releaseSpiResource();
          CC2420TransmitP$BackoffTimer$stop();


          if (((__nesc_ntoh_leuint16(CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf.data) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {
              CC2420TransmitP$PacketTimeStamp$set(CC2420TransmitP$m_msg, time32);
            }

          if (CC2420TransmitP$SFD$get()) {
              break;
            }


          case CC2420TransmitP$S_EFD: 
            CC2420TransmitP$sfdHigh = FALSE;
          CC2420TransmitP$CaptureSFD$captureRisingEdge();

          if (__nesc_ntoh_leuint16(CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf.data) & (1 << IEEE154_FCF_ACK_REQ)) {
              CC2420TransmitP$m_state = CC2420TransmitP$S_ACK_WAIT;
              CC2420TransmitP$BackoffTimer$start(CC2420_ACK_WAIT_DELAY);
            }
          else 
#line 304
            {
              CC2420TransmitP$signalDone(SUCCESS);
            }

          if (!CC2420TransmitP$SFD$get()) {
              break;
            }


          default: 
            if (!CC2420TransmitP$m_receiving) {
                CC2420TransmitP$sfdHigh = TRUE;
                CC2420TransmitP$CaptureSFD$captureFallingEdge();
                CC2420TransmitP$CC2420Receive$sfd(time32);
                CC2420TransmitP$m_receiving = TRUE;
                CC2420TransmitP$m_prev_time = time;
                if (CC2420TransmitP$SFD$get()) {
                    {
                      __nesc_atomic_end(__nesc_atomic); 
#line 322
                      return;
                    }
                  }
              }
          CC2420TransmitP$sfdHigh = FALSE;
          CC2420TransmitP$CaptureSFD$captureRisingEdge();
          CC2420TransmitP$m_receiving = FALSE;
          if (time - CC2420TransmitP$m_prev_time < 10) {
              CC2420TransmitP$CC2420Receive$sfd_dropped();
              if (CC2420TransmitP$m_msg) {
                CC2420TransmitP$PacketTimeStamp$clear(CC2420TransmitP$m_msg);
                }
            }
#line 334
          break;
        }
    }
#line 336
    __nesc_atomic_end(__nesc_atomic); }
}

# 50 "/opt/tinyos-2.1.0/tos/interfaces/GpioCapture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(uint16_t time){
#line 50
  CC2420TransmitP$CaptureSFD$captured(time);
#line 50
}
#line 50
# 126 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Capture$reset(void )
#line 126
{
#line 126
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 5;
}

# 55 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset(void ){
#line 55
  HplAtm128Timer1P$Capture$reset();
#line 55
}
#line 55
# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(uint16_t time)
#line 64
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset();
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(time);
}

# 51 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Capture$size_type t){
#line 51
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(t);
#line 51
}
#line 51
# 117 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void )
#line 117
{
}

# 51 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void )
#line 51
{
}

# 166 "/opt/tinyos-2.1.0/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void )
{
}

# 47 "/opt/tinyos-2.1.0/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void )
{
}

# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$overflow(void ){
#line 71
  /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 71
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.1.0/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper++;
      if ((/*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper & /*Counter32khz32C.Transform32*/TransformCounterC$0$OVERFLOW_MASK) == 0) {
        /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.1.0/tos/lib/timer/Counter.nc"
inline static void /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow(void ){
#line 71
  /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow();
}

# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer1P$Timer$overflow(void ){
#line 61
  /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow();
#line 61
  /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow();
#line 61
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow();
#line 61
}
#line 61
# 63 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired();
}

# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig0$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired();
}

# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig1$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired();
}

# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig2$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired();
}

# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig3$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired();
}

# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig4$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired();
}

# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig5$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired();
#line 41
}
#line 41
# 175 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$InterruptFIFOP$fired(void )
#line 175
{
  if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_STARTED) {
      CC2420ReceiveP$beginReceive();
    }
  else {
      CC2420ReceiveP$m_missed_packets++;
    }
}

# 57 "/opt/tinyos-2.1.0/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired(void ){
#line 57
  CC2420ReceiveP$InterruptFIFOP$fired();
#line 57
}
#line 57
# 38 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void )
#line 38
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired();
}

# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void ){
#line 64
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired();
}

# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig6$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired();
}

# 41 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig7$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired();
#line 41
}
#line 41
# 98 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP$SPI$read(void )
#line 98
{
#line 98
  return * (volatile uint8_t *)(0x0F + 0x20);
}

# 80 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t Atm128SpiP$Spi$read(void ){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = HplAtm128SpiP$SPI$read();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
#line 96
inline static void Atm128SpiP$Spi$enableInterrupt(bool enabled){
#line 96
  HplAtm128SpiP$SPI$enableInterrupt(enabled);
#line 96
}
#line 96
# 265 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$Spi$dataReady(uint8_t data)
#line 265
{
  bool again;

  /* atomic removed: atomic calls only */
#line 268
  {
    if (Atm128SpiP$rxBuffer != (void *)0) {
        Atm128SpiP$rxBuffer[Atm128SpiP$pos] = data;
      }

    Atm128SpiP$pos++;
  }
  Atm128SpiP$Spi$enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP$pos < Atm128SpiP$len;
  }

  if (again) {
      Atm128SpiP$sendNextPart();
    }
  else {
      uint8_t discard;
      uint16_t myLen;
      uint8_t * rx;
      uint8_t * tx;

      /* atomic removed: atomic calls only */
#line 290
      {
        myLen = Atm128SpiP$len;
        rx = Atm128SpiP$rxBuffer;
        tx = Atm128SpiP$txBuffer;
        Atm128SpiP$rxBuffer = (void *)0;
        Atm128SpiP$txBuffer = (void *)0;
        Atm128SpiP$len = 0;
        Atm128SpiP$pos = 0;
      }
      discard = Atm128SpiP$Spi$read();

      Atm128SpiP$SpiPacket$sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 92 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void HplAtm128SpiP$SPI$dataReady(uint8_t data){
#line 92
  Atm128SpiP$Spi$dataReady(data);
#line 92
}
#line 92
# 52 "/opt/tinyos-2.1.0/tos/system/RealMainP.nc"
  int main(void )
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 60
      ;

      RealMainP$Scheduler$init();





      RealMainP$PlatformInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;





      RealMainP$SoftwareInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP$Boot$booted();


  RealMainP$Scheduler$taskLoop();




  return -1;
}

# 123 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP$popTask();
    if (nextTask == SchedulerBasicP$NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 131
          FALSE;

#line 131
          return __nesc_temp;
        }
      }
  }
#line 134
  SchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

#line 164
static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.1.0/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x2adc4c97d960){
#line 64
  switch (arg_0x2adc4c97d960) {
#line 64
    case CC2420CsmaP$startDone_task:
#line 64
      CC2420CsmaP$startDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$stopDone_task:
#line 64
      CC2420CsmaP$stopDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$sendDone_task:
#line 64
      CC2420CsmaP$sendDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420ControlP$sync:
#line 64
      CC2420ControlP$sync$runTask();
#line 64
      break;
#line 64
    case CC2420ControlP$syncDone:
#line 64
      CC2420ControlP$syncDone$runTask();
#line 64
      break;
#line 64
    case HplCC2420InterruptsP$CCATask:
#line 64
      HplCC2420InterruptsP$CCATask$runTask();
#line 64
      break;
#line 64
    case CC2420SpiP$grant:
#line 64
      CC2420SpiP$grant$runTask();
#line 64
      break;
#line 64
    case Atm128SpiP$zeroTask:
#line 64
      Atm128SpiP$zeroTask$runTask();
#line 64
      break;
#line 64
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask:
#line 64
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case CC2420ReceiveP$receiveDone_task:
#line 64
      CC2420ReceiveP$receiveDone_task$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x2adc4c97d960);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 155 "/opt/tinyos-2.1.0/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

# 92 "/opt/tinyos-2.1.0/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg)
#line 92
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 94
  return __nesc_ntoh_leuint16(header->dest.data);
}

#line 61
static error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len)
#line 63
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg);

#line 65
  __nesc_hton_leuint8(header->type.data, id);
  __nesc_hton_leuint16(header->dest.data, addr);
  __nesc_hton_leuint16(header->destpan.data, CC2420ActiveMessageP$CC2420Config$getPanAddr());
  __nesc_hton_leuint16(header->src.data, CC2420ActiveMessageP$AMPacket$address());

  CC2420ActiveMessageP$SendNotifier$aboutToSend(id, addr, msg);

  return CC2420ActiveMessageP$SubSend$send(msg, len);
}

# 95 "/opt/tinyos-2.1.0/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void )
#line 95
{
  am_addr_t myAddr;

#line 97
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    myAddr = ActiveMessageAddressC$addr;
#line 97
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 96 "/opt/tinyos-2.1.0/tos/system/StateImplP.nc"
static error_t StateImplP$State$requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

#line 98
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {
      if (reqState == StateImplP$S_IDLE || StateImplP$state[id] == StateImplP$S_IDLE) {
          StateImplP$state[id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

#line 133
static bool StateImplP$State$isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

#line 135
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    isState = StateImplP$state[id] == myState;
#line 135
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

# 629 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP$acquireSpiResource(void )
#line 629
{
  error_t error = CC2420TransmitP$SpiResource$immediateRequest();

#line 631
  if (error != SUCCESS) {
      CC2420TransmitP$SpiResource$request();
    }
  return error;
}

# 126 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP$Resource$immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP$WorkingState$requestState(CC2420SpiP$S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP$SpiResource$isOwner()) {
          CC2420SpiP$m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP$SpiResource$immediateRequest()) == SUCCESS) {
            CC2420SpiP$m_holder = id;
          }
        else {
            CC2420SpiP$WorkingState$toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 147 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
static uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(uint8_t id)
#line 147
{
  /* atomic removed: atomic calls only */
#line 148
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY) {
        unsigned char __nesc_temp = 
#line 149
        TRUE;

#line 149
        return __nesc_temp;
      }
    else 
#line 150
      {
        unsigned char __nesc_temp = 
#line 150
        FALSE;

#line 150
        return __nesc_temp;
      }
  }
}

# 105 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP$startSpi(void )
#line 105
{
  Atm128SpiP$Spi$enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 107
  {
    Atm128SpiP$Spi$initMaster();
    Atm128SpiP$Spi$enableInterrupt(FALSE);
    Atm128SpiP$Spi$setMasterDoubleSpeed(TRUE);
    Atm128SpiP$Spi$setClockPolarity(FALSE);
    Atm128SpiP$Spi$setClockPhase(FALSE);
    Atm128SpiP$Spi$setClock(0);
    Atm128SpiP$Spi$enableSpi(TRUE);
  }
  Atm128SpiP$McuPowerState$update();
}

# 130 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP$SPI$enableSpi(bool enabled)
#line 130
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 6;
      HplAtm128SpiP$Mcu$update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 6);
      HplAtm128SpiP$Mcu$update();
    }
}

#line 115
static void HplAtm128SpiP$SPI$enableInterrupt(bool enabled)
#line 115
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 7;
      HplAtm128SpiP$Mcu$update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 7);
      HplAtm128SpiP$Mcu$update();
    }
}

# 107 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP$Resource$request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (CC2420SpiP$WorkingState$requestState(CC2420SpiP$S_BUSY) == SUCCESS) {
          CC2420SpiP$m_holder = id;
          if (CC2420SpiP$SpiResource$isOwner()) {
              CC2420SpiP$grant$postTask();
            }
          else {
              CC2420SpiP$SpiResource$request();
            }
        }
      else {
          CC2420SpiP$m_requests |= 1 << id;
        }
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 159 "/opt/tinyos-2.1.0/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
    {
#line 161
      {
        unsigned char __nesc_temp = 
#line 161
        SchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;

        {
#line 161
          __nesc_atomic_end(__nesc_atomic); 
#line 161
          return __nesc_temp;
        }
      }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 123 "/opt/tinyos-2.1.0/tos/system/SimpleArbiterP.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void )
#line 123
{
  /* atomic removed: atomic calls only */
#line 124
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) 
      {
        unsigned char __nesc_temp = 
#line 126
        FALSE;

#line 126
        return __nesc_temp;
      }
  }
#line 128
  return TRUE;
}

# 659 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$loadTXFIFO(void )
#line 659
{
  cc2420_header_t *header = CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8(CC2420TransmitP$CC2420PacketBody$getMetadata(CC2420TransmitP$m_msg)->tx_power.data);

  if (!tx_power) {
      tx_power = 31;
    }

  CC2420TransmitP$CSN$clr();

  if (CC2420TransmitP$m_tx_power != tx_power) {
      CC2420TransmitP$TXCTRL$write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      tx_power & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
    }

  CC2420TransmitP$m_tx_power = tx_power;

  {
    uint8_t tmpLen __attribute((unused))  = __nesc_ntoh_leuint8(header->length.data) - 1;

#line 680
    CC2420TransmitP$TXFIFO$write((uint8_t * )header, __nesc_ntoh_leuint8(header->length.data) - 1);
  }
}

# 305 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data)
#line 305
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 306
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 308
            0;

            {
#line 308
              __nesc_atomic_end(__nesc_atomic); 
#line 308
              return __nesc_temp;
            }
          }
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
#line 311
  CC2420SpiP$SpiByte$write(addr);
  CC2420SpiP$SpiByte$write(data >> 8);
  return CC2420SpiP$SpiByte$write(data & 0xff);
}

# 127 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP$SpiByte$write(uint8_t tx)
#line 127
{
  Atm128SpiP$Spi$enableSpi(TRUE);
  Atm128SpiP$McuPowerState$update();
  Atm128SpiP$Spi$write(tx);
  while (!(* (volatile uint8_t *)(0x0E + 0x20) & 0x80)) ;
  return Atm128SpiP$Spi$read();
}

#line 241
static error_t Atm128SpiP$SpiPacket$send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen)
#line 243
{
  uint8_t discard;

#line 245
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 245
    {
      Atm128SpiP$len = bufLen;
      Atm128SpiP$txBuffer = writeBuf;
      Atm128SpiP$rxBuffer = readBuf;
      Atm128SpiP$pos = 0;
    }
#line 250
    __nesc_atomic_end(__nesc_atomic); }
  if (bufLen > 0) {
      discard = Atm128SpiP$Spi$read();
      return Atm128SpiP$sendNextPart();
    }
  else {
      Atm128SpiP$zeroTask$postTask();
      return SUCCESS;
    }
}

#line 162
static error_t Atm128SpiP$sendNextPart(void )
#line 162
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    {
      myLen = Atm128SpiP$len;
      tx = Atm128SpiP$txBuffer;
      rx = Atm128SpiP$rxBuffer;
      tmpPos = Atm128SpiP$pos;
      end = Atm128SpiP$pos + Atm128SpiP$SPI_ATOMIC_SIZE;
      end = end > Atm128SpiP$len ? Atm128SpiP$len : end;
    }
#line 176
    __nesc_atomic_end(__nesc_atomic); }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 180
      if (tx != (void *)0) {
        val = Atm128SpiP$SpiByte$write(tx[tmpPos]);
        }
      else {
#line 183
        val = Atm128SpiP$SpiByte$write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP$Spi$enableInterrupt(TRUE);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 193
    {
      if (tx != (void *)0) {
        Atm128SpiP$Spi$write(tx[tmpPos]);
        }
      else {
#line 197
        Atm128SpiP$Spi$write(0);
        }
      Atm128SpiP$pos = tmpPos;
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }


  return SUCCESS;
}

# 56 "/opt/tinyos-2.1.0/tos/interfaces/State.nc"
static void UniqueSendP$State$toIdle(void ){
#line 56
  StateImplP$State$toIdle(2U);
#line 56
}
#line 56
# 161 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 62 "/opt/tinyos-2.1.0/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 212 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().flat;

#line 101
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();

#line 120
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired();
    }
}

# 279 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static uint16_t CC2420ControlP$CC2420Config$getShortAddr(void )
#line 279
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      unsigned short __nesc_temp = 
#line 280
      CC2420ControlP$m_short_addr;

      {
#line 280
        __nesc_atomic_end(__nesc_atomic); 
#line 280
        return __nesc_temp;
      }
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
}

# 399 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$waitForNextPacket(void )
#line 399
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 400
    {
      if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_STOPPED) {
          CC2420ReceiveP$SpiResource$release();
          {
#line 403
            __nesc_atomic_end(__nesc_atomic); 
#line 403
            return;
          }
        }
      CC2420ReceiveP$receivingPacket = FALSE;










      if ((CC2420ReceiveP$m_missed_packets && CC2420ReceiveP$FIFO$get()) || !CC2420ReceiveP$FIFOP$get()) {

          if (CC2420ReceiveP$m_missed_packets) {
              CC2420ReceiveP$m_missed_packets--;
            }

          CC2420ReceiveP$beginReceive();
        }
      else {

          CC2420ReceiveP$m_state = CC2420ReceiveP$S_STARTED;
          CC2420ReceiveP$m_missed_packets = 0;
          CC2420ReceiveP$SpiResource$release();
        }
    }
#line 431
    __nesc_atomic_end(__nesc_atomic); }
}

# 149 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP$Resource$release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP$m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
      CC2420SpiP$m_holder = CC2420SpiP$NO_HOLDER;
      if (!CC2420SpiP$m_requests) {
          CC2420SpiP$WorkingState$toIdle();
          CC2420SpiP$attemptRelease();
        }
      else {
          for (i = CC2420SpiP$m_holder + 1; ; i++) {
              i %= CC2420SpiP$RESOURCE_COUNT;

              if (CC2420SpiP$m_requests & (1 << i)) {
                  CC2420SpiP$m_holder = i;
                  CC2420SpiP$m_requests &= ~(1 << i);
                  CC2420SpiP$grant$postTask();
                  {
                    unsigned char __nesc_temp = 
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 339
static error_t CC2420SpiP$attemptRelease(void )
#line 339
{


  if ((
#line 340
  CC2420SpiP$m_requests > 0
   || CC2420SpiP$m_holder != CC2420SpiP$NO_HOLDER)
   || !CC2420SpiP$WorkingState$isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP$release = TRUE;
  CC2420SpiP$ChipSpiResource$releasing();
  /* atomic removed: atomic calls only */
#line 348
  {
    if (CC2420SpiP$release) {
        CC2420SpiP$SpiResource$release();
        {
          unsigned char __nesc_temp = 
#line 351
          SUCCESS;

#line 351
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 354 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$beginReceive(void )
#line 354
{
  CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_LENGTH;
  /* atomic removed: atomic calls only */
  CC2420ReceiveP$receivingPacket = TRUE;
  if (CC2420ReceiveP$SpiResource$isOwner()) {
      CC2420ReceiveP$receive();
    }
  else {
#line 361
    if (CC2420ReceiveP$SpiResource$immediateRequest() == SUCCESS) {
        CC2420ReceiveP$receive();
      }
    else {
        CC2420ReceiveP$SpiResource$request();
      }
    }
}

#line 389
static void CC2420ReceiveP$receive(void )
#line 389
{
  CC2420ReceiveP$CSN$clr();
  CC2420ReceiveP$RXFIFO$beginRead((uint8_t *)CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf), 1);
}

# 189 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 196
            status;

            {
#line 196
              __nesc_atomic_end(__nesc_atomic); 
#line 196
              return __nesc_temp;
            }
          }
        }
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
#line 200
  CC2420SpiP$m_addr = addr | 0x40;

  status = CC2420SpiP$SpiByte$write(CC2420SpiP$m_addr);
  CC2420SpiP$Fifo$continueRead(addr, data, len);

  return status;
}

#line 329
static void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 330
{
  if (CC2420SpiP$m_addr & 0x40) {
      CC2420SpiP$Fifo$readDone(CC2420SpiP$m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 333
    {
      CC2420SpiP$Fifo$writeDone(CC2420SpiP$m_addr, tx_buf, len, error);
    }
}

# 372 "/opt/tinyos-2.1.0/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$flush(void )
#line 372
{
  CC2420ReceiveP$reset_state();
  CC2420ReceiveP$CSN$set();
  CC2420ReceiveP$CSN$clr();
  CC2420ReceiveP$SFLUSHRX$strobe();
  CC2420ReceiveP$SFLUSHRX$strobe();
  CC2420ReceiveP$CSN$set();
  CC2420ReceiveP$SpiResource$release();
  CC2420ReceiveP$waitForNextPacket();
}

#line 437
static void CC2420ReceiveP$reset_state(void )
#line 437
{
  CC2420ReceiveP$m_bytes_left = CC2420ReceiveP$RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 439
  CC2420ReceiveP$receivingPacket = FALSE;
  CC2420ReceiveP$m_timestamp_head = 0;
  CC2420ReceiveP$m_timestamp_size = 0;
  CC2420ReceiveP$m_missed_packets = 0;
}

# 318 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 321
            0;

            {
#line 321
              __nesc_atomic_end(__nesc_atomic); 
#line 321
              return __nesc_temp;
            }
          }
        }
    }
#line 325
    __nesc_atomic_end(__nesc_atomic); }
#line 325
  return CC2420SpiP$SpiByte$write(addr);
}

# 122 "/opt/tinyos-2.1.0/tos/chips/cc2420/packet/CC2420PacketP.nc"
static void CC2420PacketP$PacketTimeStamp32khz$clear(message_t *msg)
{
  __nesc_hton_int8(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timesync.data, FALSE);
  __nesc_hton_uint32(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timestamp.data, CC2420_INVALID_TIMESTAMP);
}

# 684 "/opt/tinyos-2.1.0/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$signalDone(error_t err)
#line 684
{
  /* atomic removed: atomic calls only */
#line 685
  CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
  CC2420TransmitP$abortSpiRelease = FALSE;
  CC2420TransmitP$ChipSpiResource$attemptRelease();
  CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, err);
}

#line 580
static void CC2420TransmitP$attemptSend(void )
#line 580
{
  uint8_t status;
  bool congestion = TRUE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 584
    {
      if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
          CC2420TransmitP$SFLUSHTX$strobe();
          CC2420TransmitP$releaseSpiResource();
          CC2420TransmitP$CSN$set();
          CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
          CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, ECANCEL);
          {
#line 591
            __nesc_atomic_end(__nesc_atomic); 
#line 591
            return;
          }
        }

      CC2420TransmitP$CSN$clr();

      status = CC2420TransmitP$m_cca ? CC2420TransmitP$STXONCCA$strobe() : CC2420TransmitP$STXON$strobe();
      if (!(status & CC2420_STATUS_TX_ACTIVE)) {
          status = CC2420TransmitP$SNOP$strobe();
          if (status & CC2420_STATUS_TX_ACTIVE) {
              congestion = FALSE;
            }
        }

      CC2420TransmitP$m_state = congestion ? CC2420TransmitP$S_SAMPLE_CCA : CC2420TransmitP$S_SFD;
      CC2420TransmitP$CSN$set();
    }
#line 607
    __nesc_atomic_end(__nesc_atomic); }

  if (congestion) {
      CC2420TransmitP$totalCcaChecks = 0;
      CC2420TransmitP$releaseSpiResource();
      CC2420TransmitP$congestionBackoff();
    }
  else 
#line 613
    {
      CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$CC2420_ABORT_PERIOD);
    }
}





static void CC2420TransmitP$congestionBackoff(void )
#line 622
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 623
    {
      CC2420TransmitP$RadioBackoff$requestCongestionBackoff(CC2420TransmitP$m_msg);
      CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$myCongestionBackoff);
    }
#line 626
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "/opt/tinyos-2.1.0/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC$Random$rand32(void )
#line 58
{
  uint32_t mlcg;
#line 59
  uint32_t p;
#line 59
  uint32_t q;
  uint64_t tmpseed;

  /* atomic removed: atomic calls only */
#line 62
  {
    tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC$seed;
    q = tmpseed;
    q = q >> 1;
    p = tmpseed >> 32;
    mlcg = p + q;
    if (mlcg & 0x80000000) {
        mlcg = mlcg & 0x7FFFFFFF;
        mlcg++;
      }
    RandomMlcgC$seed = mlcg;
  }
  return mlcg;
}

# 136 "/opt/tinyos-2.1.0/tos/lib/timer/TransformAlarmC.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm();
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

#line 96
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get();
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type expires;
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type )remaining << 0);
}

# 69 "/opt/tinyos-2.1.0/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void )
{
  /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type high = /*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper;
      /*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type low = /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get();

#line 76
      if (/*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get();
        }
      {
        /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type high_to = high;
        /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type low_to = low >> /*Counter32khz32C.Transform32*/TransformCounterC$0$LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*Counter32khz32C.Transform32*/TransformCounterC$0$HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 456 "/opt/tinyos-2.1.0/tos/chips/cc2420/control/CC2420ControlP.nc"
static void CC2420ControlP$writeFsctrl(void )
#line 456
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 459
    {
      channel = CC2420ControlP$m_channel;
    }
#line 461
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP$FSCTRL$write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}







static void CC2420ControlP$writeMdmctrl0(void )
#line 473
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 474
    {
      CC2420ControlP$MDMCTRL0$write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | ((
      CC2420ControlP$addressRecognition && CC2420ControlP$hwAddressRecognition) << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP$autoAckEnabled && CC2420ControlP$hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 483
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP$writeId(void )
#line 492
{
  nxle_uint16_t id[2];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 495
    {
      __nesc_hton_leuint16(id[0].data, CC2420ControlP$m_pan);
      __nesc_hton_leuint16(id[1].data, CC2420ControlP$m_short_addr);
    }
#line 498
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP$PANID$write(0, (uint8_t *)&id, sizeof id);
}

# 260 "/opt/tinyos-2.1.0/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 270
            status;

            {
#line 270
              __nesc_atomic_end(__nesc_atomic); 
#line 270
              return __nesc_temp;
            }
          }
        }
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
#line 274
  addr += offset;

  status = CC2420SpiP$SpiByte$write(addr | 0x80);
  CC2420SpiP$SpiByte$write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP$SpiByte$write(tmpData[tmpLen - len]);
    }

  return status;
}

# 42 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(uint8_t mode)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start();
  }
  return SUCCESS;
}

# 178 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 178
{
  HplAtm128Timer0AsyncP$stabiliseTimer0();
  HplAtm128Timer0AsyncP$Compare$fired();
}


__attribute((signal))   void __vector_16(void )
#line 184
{
  HplAtm128Timer0AsyncP$stabiliseTimer0();
  HplAtm128Timer0AsyncP$Timer$overflow();
}

# 195 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_12(void )
#line 195
{
  HplAtm128Timer1P$CompareA$fired();
}

__attribute((interrupt))   void __vector_13(void )
#line 199
{
  HplAtm128Timer1P$CompareB$fired();
}

__attribute((interrupt))   void __vector_24(void )
#line 203
{
  HplAtm128Timer1P$CompareC$fired();
}

__attribute((interrupt))   void __vector_11(void )
#line 207
{
  HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Timer$get());
}

# 167 "/opt/tinyos-2.1.0/tos/chips/cc2420/packet/CC2420PacketP.nc"
static uint8_t CC2420PacketP$PacketTimeSyncOffset$get(message_t *msg)
{
  return __nesc_ntoh_leuint8(CC2420PacketP$CC2420PacketBody$getHeader(msg)->length.data)
   + (sizeof(cc2420_header_t ) - MAC_HEADER_SIZE)
   - MAC_FOOTER_SIZE
   - sizeof(timesync_radio_t );
}

# 211 "/opt/tinyos-2.1.0/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_14(void )
#line 211
{
  HplAtm128Timer1P$Timer$overflow();
}

# 46 "/opt/tinyos-2.1.0/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
__attribute((signal))   void __vector_1(void )
#line 46
{
  HplAtm128InterruptSigP$IntSig0$fired();
}


__attribute((signal))   void __vector_2(void )
#line 51
{
  HplAtm128InterruptSigP$IntSig1$fired();
}


__attribute((signal))   void __vector_3(void )
#line 56
{
  HplAtm128InterruptSigP$IntSig2$fired();
}


__attribute((signal))   void __vector_4(void )
#line 61
{
  HplAtm128InterruptSigP$IntSig3$fired();
}


__attribute((signal))   void __vector_5(void )
#line 66
{
  HplAtm128InterruptSigP$IntSig4$fired();
}


__attribute((signal))   void __vector_6(void )
#line 71
{
  HplAtm128InterruptSigP$IntSig5$fired();
}


__attribute((signal))   void __vector_7(void )
#line 76
{
  HplAtm128InterruptSigP$IntSig6$fired();
}


__attribute((signal))   void __vector_8(void )
#line 81
{
  HplAtm128InterruptSigP$IntSig7$fired();
}

# 102 "/opt/tinyos-2.1.0/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_17(void )
#line 102
{
  HplAtm128SpiP$SPI$dataReady(HplAtm128SpiP$SPI$read());
}

