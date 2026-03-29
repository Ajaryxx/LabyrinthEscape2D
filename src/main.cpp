#include "PCH.hpp"
#include "core/Application.hpp"


static Core::ApplicationSpecification GetDebugConfig()
{
	Core::ApplicationSpecification spec{};
	spec.windowSpecification.title = "Labyrinth Escape 2D [DEBUG]";
	spec.windowSpecification.WindowSize = sf::VideoMode(sf::Vector2u(800, 600));
	spec.windowSpecification.style = sf::Style::Default;
	spec.windowSpecification.state = sf::State::Windowed;
	spec.windowSpecification.fpsLimit = 60;
	spec.windowSpecification.vSync = true;

	return spec;
}
static Core::ApplicationSpecification GetReleaseConfig()
{
	Core::ApplicationSpecification spec{};
	spec.windowSpecification.title = "Labyrinth Escape 2D [RELEASE]";
	spec.windowSpecification.WindowSize = sf::VideoMode::getDesktopMode();
	spec.windowSpecification.style = sf::Style::Default;
	spec.windowSpecification.state = sf::State::Fullscreen;
	spec.windowSpecification.fpsLimit = 60;
	spec.windowSpecification.vSync = true;

	return spec;
}


static bool RunApp(const Core::ApplicationSpecification& spec)
{
	Core::Application app(spec);


	return true;
}

#if defined(_WIN32) && defined(__DEBUG) || defined(__linux__)

	int main(int argc, char* argv[])
	{
	#if __DEBUG
		//debug
		RunApp(GetDebugConfig());

	#else
		//ReleaseW
		InitzializeApp(GetReleaseConfig());

	#endif // __DEBUG


		std::println("Hello World");
		return EXIT_SUCCESS;
	}

#else

	int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
	{
		RunApp(GetReleaseConfig());
	}

#endif //defined(_WIN32) && defined(__DEBUG) || defined(__linux__)

