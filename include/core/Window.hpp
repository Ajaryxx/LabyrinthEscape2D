#pragma once
#include "utilities/GameValues.hpp"

namespace Core
{
	class Window
	{
	public:
		Window(const WindowSpecification& spec);
		~Window();

		Window(const Window&) = delete;
		Window& operator=(const Window&) = delete;

		inline bool IsOpen() const { return m_Window.isOpen(); }

	private:

		sf::RenderWindow m_Window;
		WindowSpecification m_spec;

	};
}