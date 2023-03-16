﻿// UTAGE: Unity Text Adventure Game Engine (c) Ryohei Tokimurausing UnityEngine;

namespace Utage
{
	// 演出の強制スキップコマンド
	internal class AdvCommandSkipEffect : AdvCommand
	{
		//スキップタイプ
		enum SkipEffectType
		{
			All,
			NoWait,
		}

		private SkipEffectType SkipType { get; }
		private bool IgnoreLoop { get; }
		public AdvCommandSkipEffect(StringGridRow row, AdvSettingDataManager dataManager)
			: base(row)
		{
			SkipType = ParseCellOptional(AdvColumnName.Arg1,SkipEffectType.All);
			IgnoreLoop = ParseCellOptional(AdvColumnName.Arg2,true);			
		}


		public override void DoCommand(AdvEngine engine)
		{
			switch (SkipType)
			{
				case SkipEffectType.All:
					CurrentTread.WaitManager.ForceSkipAllEffect(IgnoreLoop);
					break;
				case SkipEffectType.NoWait:
					CurrentTread.WaitManager.ForceSkipNoWaitEffect(IgnoreLoop);
					break;
			}
		}

	}
}
