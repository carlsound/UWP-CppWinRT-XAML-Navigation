#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::UWP_CppWinRT_XAML_Navigation::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}


void winrt::UWP_CppWinRT_XAML_Navigation::implementation::MainPage::NavViewSelectionChanged(winrt::Windows::UI::Xaml::Controls::NavigationView const& sender, winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs const& args)
{
	winrt::Windows::UI::Xaml::Controls::NavigationViewItem item = args.SelectedItem;

	if (item.Tag == "second page")
	{
		this->MainFrame.Navigate(SecondPage);
	}
	else if (item.Tag = "third page")
	{
		this->MainFrame.Navigate(ThirdPage);
	}
}
