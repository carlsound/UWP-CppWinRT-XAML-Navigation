// https://channel9.msdn.com/events/Windows/Windows-Developer-Day-Fall-Creators-Update/WinDev010?term=uwp%20navigation&lang-en=true

#pragma once

#include "MainPage.g.h"

namespace winrt::UWP_CppWinRT_XAML_Navigation::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
		void NavViewSelectionChanged(winrt::Windows::UI::Xaml::Controls::NavigationView const& sender, winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs const& args);
	};
}

namespace winrt::UWP_CppWinRT_XAML_Navigation::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
