#pragma once
#include "utilities/GameValues.hpp"

namespace Core
{

	class Window;

	class Application
	{
	public:
		Application(const ApplicationSpecification& specification);
		~Application();

		Application(const Application&) = delete;
		Application& operator=(const Application& other) = delete;

		void Run();

		inline static Application& Get() { return *m_app; }

	private:

		inline static Application* m_app = nullptr;
		ApplicationSpecification m_specification;

		std::unique_ptr<Window> m_Window;

	};
}