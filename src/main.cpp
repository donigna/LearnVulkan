#include <vk_engine.h>

#include <vk_types.h>
#include <vk_initializers.h>

// Bootstrap library
#include "VkBootstrap.h"

int main(int argc, char* argv[])
{
	VulkanEngine engine;

	engine.init();	
	
	engine.run();	

	engine.cleanup();	

	return 0;
}
