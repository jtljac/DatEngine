# Generic
target_sources (DatEngine
				PUBLIC
					"Timing.h"
)

# Subdirectories
if(WIN32)
	add_subdirectory ("Windows")
else(WIN32)
	add_subdirectory ("Poisx")
endif(WIN32)