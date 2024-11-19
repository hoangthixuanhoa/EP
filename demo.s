	.file	"demo.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "adress of num = %p\12\0"
.LC1:
	.ascii "size of int = %d\12\0"
.LC2:
	.ascii "size of char = %d\12\0"
.LC3:
	.ascii "size of float = %d\12\0"
.LC4:
	.ascii "size of double = %d\12\0"
.LC5:
	.ascii "size of void = %d\12\0"
	.align 8
.LC6:
	.ascii "--------------------------------------\0"
.LC7:
	.ascii "C\341\272\245p gi\341\272\245y ph\303\251p l\303\241i xe\0"
.LC8:
	.ascii "Nh\341\272\255p tu\341\273\225i: \0"
.LC9:
	.ascii "%d\0"
	.align 8
.LC10:
	.ascii "\304\220\341\273\247 tu\341\273\225i \304\221\306\260\341\273\243c c\341\272\245p gi\341\272\245y\0"
.LC11:
	.ascii "Ch\306\260a \304\221\341\273\247 tu\341\273\225i.\0"
.LC12:
	.ascii "Nh\341\272\255p ch\306\260a \304\221\303\272ng\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	leaq	-4(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$4, %edx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$1, %edx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$4, %edx
	leaq	.LC3(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$8, %edx
	leaq	.LC4(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$1, %edx
	leaq	.LC5(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC6(%rip), %rax
	movq	%rax, %rcx
	call	puts
	leaq	.LC7(%rip), %rax
	movq	%rax, %rcx
	call	puts
	leaq	.LC8(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-8(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC9(%rip), %rax
	movq	%rax, %rcx
	call	scanf
	movl	-8(%rbp), %eax
	cmpl	$17, %eax
	jle	.L2
	leaq	.LC10(%rip), %rax
	movq	%rax, %rcx
	call	printf
	jmp	.L3
.L2:
	movl	-8(%rbp), %eax
	testl	%eax, %eax
	jle	.L4
	leaq	.LC11(%rip), %rax
	movq	%rax, %rcx
	call	printf
	jmp	.L3
.L4:
	leaq	.LC12(%rip), %rax
	movq	%rax, %rcx
	call	printf
.L3:
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 12.4.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
