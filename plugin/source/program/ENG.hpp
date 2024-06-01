#include <array>

namespace ENG {

	std::array CHAPTERS = {
		"Prologue",
		"Matsuri Jasmine",
		"Mihomi Hydrangea",
		"Ayume Daffodil",
		"Moeko Ivy",
		"Nenene Anemone",
		"True Route",
		"Matsuri: Sunny Day",
		"Mihomi: Summer Rain",
		"Ayume: Excitement",
		"Moeko: Salvatore",
		"Nenene: Europe",
		"Rafflesia: Tea Time",
		"Yukimaru: Sidekick"
	};

	static_assert(CHAPTERS.size() == 14);

	std::array ENDINGS = {
		"Matsuri HAPPY END『A thing without form』",
		"Matsuri BAD END『A terribly cruel and irrational world』",
		"Mihomi HAPPY END『A rainy day』",
		"Mihomi BAD END『Showtime』",
		"Ayume HAPPY END『Flower of conceit』",
		"Ayume BAD END『Pandora's Box』",
		"Moeko HAPPY END『The birth of a Savior』",
		"Moeko BAD END『Moeko and Itarou's Lovey-Dovey 365 Days』",
		"Nenene HAPPY END『Anemone』",
		"Nenene BAD END『Awakening』",
		"True Route",
		"Matsuri: Sunny Day",
		"Mihomi: Summer Rain",
		"Ayume: Excitement",
		"Moeko: Salvatore",
		"Nenene: Europe",
		"Rafflesia: Tea Time",
		"Yukimaru: Sidekick"
	};

	static_assert(ENDINGS.size() == 18);

	std::array SAVE_EXIT = {
		"Exit game and return to title screen?",
		"All unsaved data will be lost.",
		"Proceed?"	
	};

	static_assert(SAVE_EXIT.size() == 3);

	std::array NOTIFICATIONS = {
		"記録メディアの空き容量が不足しています。",
		"セーブするには%s以上の空き容量が必要です。",
		"ゲームを開始してもよろしいですか？",
		//
		"メモリースティックが挿入されていません。",
		"セーブするには%s以上の空き容量が必要です。",
		"ゲームを開始してもよろしいですか？",
		//
		"Save data may be corrupted.",
		"セーブするには%s以上の空き容量が必要です。",
		"ゲームを開始してもよろしいですか？",
		//
		"メモリースティックが挿入されていません。",
		"もう一度チェックしますか？",
		"",
		//
		"Save data may be corrupted.",
		"Check again?",
		"",
		//
		"「\"TITLE_NAME L\"」の",
		"There is no save data,",
		"Check again?",
		//
		"メモリースティックが挿入されていません。",
		"セーブするには%s以上の空き容量が必要です。",
		"もう一度チェックしますか？",
		//
		"セーブデータが破損している可能性があります。",
		"このままセーブを行うと破損データに上書きすることになりますが、",
		"よろしいですか？",
		//
		"Save system data?",
		"",
		"",
		//
		"処理が中断されました。",
		"",
		"",
		//
		"Load system data?",
		"",
		"",
		//
		"System data loaded.",
		"",
		"",
		//
		"サインインされていないため、セーブを行うことは出来ません。",
		"セーブを行うには、サインインを行ってください。",
		"",
		//
		"サインインされていないため、ロードを行うことは出来ません。",
		"ロードを行うには、サインインを行ってください。",
		"",
		//
		"ストレージデバイスが選択されていないため、",
		"セーブを行うことは出来ません。セーブを行うには、",
		"ゲームを再起動してストレージデバイスを選択してください。",
		//
		"ストレージデバイスが選択されていないため、",
		"ロードを行うことは出来ません。ロードを行うには、",
		"ゲームを再起動してストレージデバイスを選択してください。",
		//
		"Overwrite data?",
		"",
		"",
		//
		"Failed to save data,",
		"Please try again.",
		"",
		//
		"Save data is corrupted.",
		"An error occurred while loading.",
		"",
		//
		"Loading data.",
		"All unsaved data will be lost.",
		"Proceed?",
		//
		"You can erase save data, and begin the [Game] from a clean slate.",
		"Your erased save data cannot be recovered.",
		"Are you sure you want to erase your save data?"
	};

	static_assert(NOTIFICATIONS.size() == 63);

	std::array CORRUPTED_SAVE = {
		"Save data is corrupted.",
		"An error occurred while loading."
	};

	static_assert(CORRUPTED_SAVE.size() == 2);

	std::array YES_NO = {
		"YES",
		"NO",
		"YES／NO",
		"YES／"
	};

	static_assert(YES_NO.size() == 4);

	std::array QUICK_SAVE = {
		"Quick saving and jumping to selected point.",
		"Proceed?"
	};

	static_assert(QUICK_SAVE.size() == 2);

	std::array PLAYING_LOG_MAIN = {
		"Endings",
		"Chapters",
		"Album",
		"Total Text Read",
		"Choices"
	};

	static_assert(PLAYING_LOG_MAIN.size() == 5);

	std::array SETTINGS_DESCRIPTIONS = {
		
		"Adjusts the opacity of the%N"
		"textbox.%N%N"
		"The window will grow more%N"
		"transparent the closer it is%N"
		"to 'Min', and vice-versa.",

		"Adjusts the speed messages%N"
		"display at.%N%N"
		"They will display slower the%N"
		"closer it is set to 'Min',%N"
		"and faster the closer it is%N"
		"set to 'Max'.%N"
		"Messages will display%N"
		"instantly if set all the way%N"
		"to 'Max'.",

		"Synchronizes messages with%N"
		"the corresponding voice-line%N"
		"if applicable.%N%N"
		"When set to 'On', messages%N"
		"will be displayed in sync%N"
		"with the voice line.%N%N"
		"If set to 'Off', they will%N"
		"display at the same speed as%N"
		"non-voiced messages.",

		"Changes the color of choices%N"
		"depending on if they have%N"
		"already been chosen or not.%N%N"
		"When set to 'On', previously%N"
		"selected choices will be%N"
		"displayed as red.%N%N"
		"When set to 'off', the color%N"
		"of the choice will not change.",

		"Changes the buttons with%N"
		"which text can be advanced.%N%N"
		"When set to 'A Button', only%N"
		"the A Button will advance%N"
		"text, but if set to%N"
		"'A Button/D-Pad', then both%N"
		"the A button, the D-Pad,%N"
		"and the right stick will%N"
		"advance text.",

		"Adjusts the speed at which%N"
		"messages display during Auto%N"
		"Mode.%N%N"
		"They will display slower the%N"
		"closer it is set to 'Min',%N"
		"and faster the closer it is%N"
		"set to 'Max'.",

		"Sets how the game skips when%N"
		"the ZR Button is held down.%N%N"
		"If set to 'Read Only', it%N"
		"will only skip messages%N"
		"you've already read and will%N"
		"stop at previously unread%N"
		"messages.%N%N"
		"If set to 'All', it will skip%N"
		"all messages, previously read%N"
		"or otherwise.",

		"Sets how the game skips when%N"
		"the R Button is pressed to%N"
		"enter Skip Mode.%N%N"
		"If set to 'Read Only', it%N"
		"will only skip messages%N"
		"you've already read and will%N"
		"stop at previously unread%N"
		"messages.%N%N"
		"If set to 'All', it will skip%N"
		"all messages, previously read%N"
		"or otherwise.",

		"Sets whether to display scene%N"
		"titles when the scene%N"
		"changes.%N%N"
		"If set to 'On', the scene%N"
		"title will display when the%N"
		"scene changes.%N%N"
		"If set to 'Off', the scene%N"
		"title will not be displayed%N"
		"when the scene changes.",
	
		"Adjusts controller's%N"
		"vibrations.%N%N"
		"The closer it is to 'Min',%N"
		"the weaker they will be.%N%N"
		"The closer it is to 'Max',%N"
		"the stronger they will be.",

		"Adjusts the volume of the%N"
		"game's BGM.%N%N"
		"The closer it is to 'Min',%N"
		"the quieter it will be.%N%N"
		"The closer it is to 'Max',%N"
		"the louder it will be.",

		"Adjusts the volume of in-game%N"
		"sound effects.%N%N"
		"The closer it is to 'Min',%N"
		"the quieter they will be.%N%N"
		"The closer it is to 'Max',%N"
		"the louder they will be.",

		"Adjusts the volume of system%N"
		"sound effects.%N%N"
		"The closer it is to 'Min',%N"
		"the quieter they will be.%N%N"
		"The closer it is to 'Max',%N"
		"the louder they will be.",

		"Adjusts the voice volume.%N%N"
		"The closer it is to 'Min',%N"
		"the quieter voices will be.%N%N"
		"The closer it is to 'Max',%N"
		"the louder voices will be.",

		"Set TV display area.%N%N"
		"The closer it is to 'Min',%N"
		"the smaller will be area.%N%N"
		"The closer it is to 'Max',%N"
		"the area will become larger.",

		"Enable touch screen.%N%N"
		"If it's 'ON', you can use%N"
		"touch screen to advance%N%N"
		"messages and select choices.",

		"Enable hints.%N%N"
		"If it's 'ON', a hint%N"
		"will be displayed next%N%N"
		"to selected choice.",

		"Disable/Enable playing%N%N"
		"voices for individual%N"
		"characters.",
	
		"Set background image theme.%N"
		"You can switch by pressing Y."
	};

	static_assert(SETTINGS_DESCRIPTIONS.size() == 19);

	char SAVING[] = "Saving...";

	std::array PRISON = {
		"Write Clear Password",
		"No spaces allowed"
	};

	static_assert(PRISON.size() == 2);

	char16_t CLEAR_PASSWORD[] = u"Sough";
}