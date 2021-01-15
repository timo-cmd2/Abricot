.set	K_SEG, 0x0	           # kernel segment
.set	K_OFF, 0x0000600           # kernel offset
.set	GDT_SIZE, 16	  	   # GDT size in rows
.set	IDT_SIZE, 32		   # IDT size in rows
.set	GDT_SEL_KERNEL_CS, 0x0008  # kernel code selector
.set	GDT_SEL_KERNEL_DS, 0x0010  # kernel data selector
