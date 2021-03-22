/** Export to platform-specific mods */
#[cfg(target_arch = "x86_64")]
pub use self:x86_64::kernel::{
    get_memfile,
    get_memory_size,
    init,
    irq, 
    jump_to_user_land,
    processor,
    register_task,
    serial,
};
