//
//  GameBattleEventViewController.h
//  Pokemon
//
//  Created by Kaijie Yu on 4/11/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
  kGameBattleEventTypeNone          = 0,
  kGameBattleEventTypeNoPMAvailable = 1 << 0,
  kGameBattleEventTypeWin           = 1 << 1,
  kGameBattleEventTypeLevelUp       = 1 << 2,
  kGameBattleEventTypeEvolution     = 1 << 3,
  kGameBattleEventTypeCaughtWPM     = 1 << 4 // WPM: Wild PokeMon
}GameBattleEventType;

@interface GameBattleEventViewController : UIViewController

- (void)loadViewWithEventType:(GameBattleEventType)eventType
                         info:(NSDictionary *)info
                     animated:(BOOL)animated
                   afterDelay:(NSTimeInterval)delay;

@end
