	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 2
	.globl	_printl                         ; -- Begin function printl
	.p2align	2
_printl:                                ; @printl
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	stur	wzr, [x29, #-12]
	b	LBB0_1
LBB0_1:                                 ; =>This Inner Loop Header: Depth=1
	ldur	x8, [x29, #-8]
	ldrb	w8, [x8]
	subs	w8, w8, #0
	cset	w8, eq
	tbnz	w8, #0, LBB0_19
	b	LBB0_2
LBB0_2:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	x8, [x29, #-8]
	ldrsb	w8, [x8]
	subs	w8, w8, #48
	cset	w8, lt
	tbnz	w8, #0, LBB0_18
	b	LBB0_3
LBB0_3:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	x8, [x29, #-8]
	ldrsb	w8, [x8]
	subs	w8, w8, #57
	cset	w8, gt
	tbnz	w8, #0, LBB0_18
	b	LBB0_4
LBB0_4:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	x8, [x29, #-8]
	ldrsb	w8, [x8]
	subs	w8, w8, #43
	mov	w8, w8
                                        ; kill: def $x8 killed $w8
	str	x8, [sp, #8]                    ; 8-byte Folded Spill
	subs	x8, x8, #14
	cset	w8, hi
	tbnz	w8, #0, LBB0_17
; %bb.5:                                ;   in Loop: Header=BB0_1 Depth=1
	ldr	x11, [sp, #8]                   ; 8-byte Folded Reload
	adrp	x10, lJTI0_0@PAGE
	add	x10, x10, lJTI0_0@PAGEOFF
Ltmp0:
	adr	x8, Ltmp0
	ldrsw	x9, [x10, x11, lsl #2]
	add	x8, x8, x9
	br	x8
LBB0_6:                                 ;   in Loop: Header=BB0_1 Depth=1
	stur	wzr, [x29, #-12]
	b	LBB0_17
LBB0_7:                                 ;   in Loop: Header=BB0_1 Depth=1
	mov	w8, #1                          ; =0x1
	stur	w8, [x29, #-12]
	b	LBB0_17
LBB0_8:                                 ;   in Loop: Header=BB0_1 Depth=1
	mov	w8, #2                          ; =0x2
	stur	w8, [x29, #-12]
	b	LBB0_17
LBB0_9:                                 ;   in Loop: Header=BB0_1 Depth=1
	mov	w8, #3                          ; =0x3
	stur	w8, [x29, #-12]
	b	LBB0_17
LBB0_10:                                ;   in Loop: Header=BB0_1 Depth=1
	mov	w8, #4                          ; =0x4
	stur	w8, [x29, #-12]
	b	LBB0_17
LBB0_11:                                ;   in Loop: Header=BB0_1 Depth=1
	mov	w8, #5                          ; =0x5
	stur	w8, [x29, #-12]
	b	LBB0_17
LBB0_12:                                ;   in Loop: Header=BB0_1 Depth=1
	mov	w8, #6                          ; =0x6
	stur	w8, [x29, #-12]
	b	LBB0_17
LBB0_13:                                ;   in Loop: Header=BB0_1 Depth=1
	mov	w8, #7                          ; =0x7
	stur	w8, [x29, #-12]
	b	LBB0_17
LBB0_14:                                ;   in Loop: Header=BB0_1 Depth=1
	mov	w8, #8                          ; =0x8
	stur	w8, [x29, #-12]
	b	LBB0_17
LBB0_15:                                ;   in Loop: Header=BB0_1 Depth=1
	mov	w8, #9                          ; =0x9
	stur	w8, [x29, #-12]
	b	LBB0_17
LBB0_16:                                ;   in Loop: Header=BB0_1 Depth=1
	ldur	w8, [x29, #-12]
	add	w8, w8, #1
	stur	w8, [x29, #-12]
	b	LBB0_17
LBB0_17:                                ;   in Loop: Header=BB0_1 Depth=1
	ldur	w9, [x29, #-12]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	ldur	x8, [x29, #-8]
	add	x8, x8, #1
	stur	x8, [x29, #-8]
	b	LBB0_18
LBB0_18:                                ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_1
LBB0_19:
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_printf
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
	.p2align	2
lJTI0_0:
	.long	LBB0_16-Ltmp0
	.long	LBB0_17-Ltmp0
	.long	LBB0_17-Ltmp0
	.long	LBB0_17-Ltmp0
	.long	LBB0_17-Ltmp0
	.long	LBB0_6-Ltmp0
	.long	LBB0_7-Ltmp0
	.long	LBB0_8-Ltmp0
	.long	LBB0_9-Ltmp0
	.long	LBB0_10-Ltmp0
	.long	LBB0_11-Ltmp0
	.long	LBB0_12-Ltmp0
	.long	LBB0_13-Ltmp0
	.long	LBB0_14-Ltmp0
	.long	LBB0_15-Ltmp0
                                        ; -- End function
	.globl	_read_line                      ; -- Begin function read_line
	.p2align	2
_read_line:                             ; @read_line
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	str	w1, [sp, #4]
	mov	w0, #0                          ; =0x0
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	w8, #0                          ; =0x0
	str	w8, [sp, #8]                    ; 4-byte Folded Spill
	stur	wzr, [x29, #-4]
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	bl	_printl
	ldr	w0, [sp, #8]                    ; 4-byte Folded Reload
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"%d"

l_.str.1:                               ; @.str.1
	.asciz	"\n"

l_.str.2:                               ; @.str.2
	.asciz	"12 +"

.subsections_via_symbols
