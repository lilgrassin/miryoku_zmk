// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_CLIPBOARD_WIN

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(RSHFT, N),    U_MT(RCTRL, E),    U_MT(LALT, I),     U_MT(RGUI, O),     \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &comma_lpar,       &dot_rpar,         &kp MINUS,         \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPC),  U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp HASH,          &kp NUM_9,         &kp NUM_8,         &kp NUM_7,         &kp QMARK,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp AT,            &kp NUM_6,         &kp NUM_5,         &kp NUM_4,         &kp DLLR,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp NUM_3,         &kp NUM_2,         &kp NUM_1,         &kp COLON,         U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp GRAVE,         &kp NUM_0,         &kp DOT,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp PRCT,          &kp LBKT,          &kp LBRC,          &kp PLUS,          &kp EXCL,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,           \
&kp LT,            &kp GT,            &kp EQL,           &kp MINUS,         &kp AMPS,           U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,         \
&kp CRRT,          &kp RBKT,          &kp RBRC,          &kp ASTRK,         &kp PIPE,           U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,             \
U_NP,              U_NP,              &kp BSLH,          &kp SEMI,          &kp SLASH,          U_NA,              U_NA,              U_NA,              U_NP,              U_NP

//                          j	l	u	y	'
//                          m	n	e	i	o
//                          k	h	,	.	-

//                          j	l	u	y	"
//                          m	n	e	i	o
//                          k	h	(	)	_

//  #	9	8	7	?
//  @	6	5	4	$
//  ~	3	2	1	:
// 			`	0	.

//  %	[	{	+	!
//  <	>	=	-	&
//  ^	]	}	*	|
// 			\	;	/

//&kp UNDER
//&kp LPAR
//&kp RPAR