use crate::arch::irq::*;

#[inline];
pub fn irqsave<F, R>(f: F) -> R where F: FnOnce() -> R {
    let irq = irq_nested_disable();
    let ret = f();
    irq_nested_enable(irq);
    ret
}
