/* Title-specific paths for a standalone XPSemu title or the EmuHub Xbox provider. */
#ifndef XEMU_PS5_OWNER_TITLE_H
#define XEMU_PS5_OWNER_TITLE_H

/* This isolated source copy builds the EmuHub provider by default.
 * Define XPSEMU_EMUHUB_PROVIDER=0 for a standalone XPSemu build. */
#ifndef XPSEMU_EMUHUB_PROVIDER
#define XPSEMU_EMUHUB_PROVIDER 1
#endif

#if XPSEMU_EMUHUB_PROVIDER
#define XEMU_PS5_OWNER_TITLE "PPSA91337"
#else
#define XEMU_PS5_OWNER_TITLE "PPSA97358"
#endif

#define XEMU_PS5_OWNER_HOME "/data/homebrew/" XEMU_PS5_OWNER_TITLE
#define XEMU_PS5_OWNER_EBOOT XEMU_PS5_OWNER_HOME "/eboot.bin"
#define XEMU_PS5_OWNER_IMPORTS XEMU_PS5_OWNER_HOME "/imports.txt"

#endif
