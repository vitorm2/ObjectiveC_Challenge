//
//  ViewController.h
//  ObjectiveC_Challenge
//
//  Created by Vitor Demenighi on 16/03/20.
//  Copyright © 2020 Vitor Demenighi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Movie.h"
#import "Service.h"

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITableView *movies_mainTableView;

@property NSArray<Movie *> *popularMovies;
@property NSArray<Movie *> *nowPlayingMovies;
@property NSArray<Movie *> *filtedPopularArray;
@property NSArray<Movie *> *filtedNowPlayingArray;

- (void) setupNavigationBar;
- (NSArray *) sortMovieArrayByVoteAverage:(NSMutableArray<Movie *> *)movieArray;



@end

