set(COMPONENT_SRCS
	src/main.cpp
)
set(COMPONENT_REQUIRES
	nvs_flash
	spiffs
)

register_component()

spiffs_create_partition_image(
	storage
	storage
	FLASH_IN_PROJECT
)
