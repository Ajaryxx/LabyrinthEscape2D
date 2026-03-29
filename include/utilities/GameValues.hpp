#pragma once

#include <cstdint>
namespace Core
{
	typedef uint8_t uint8;
	typedef int8_t int8;

	typedef uint16_t uint16;
	typedef int16_t int16;

	typedef uint32_t uint32;
	typedef int32_t int32;

	typedef uint64_t uint64;
	typedef int64_t int64;

	typedef int32 EventHandleID;


	struct WindowSpecification
	{
		sf::String title;
		sf::VideoMode WindowSize;
		uint8 style = sf::Style::Default;
		sf::State state = sf::State::Windowed;
		sf::ContextSettings ContextSettings{};

		bool vSync = true;
		//NOTE: Setting this to 0 will disable the framerate limit
		uint32 fpsLimit = 60;
	};

	struct ApplicationSpecification
	{
		uint8 flags = 0x00;

		WindowSpecification windowSpecification;

	};
}